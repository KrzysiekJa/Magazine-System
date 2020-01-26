#include "Database.h"
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

using Record = std::vector<std::string>;
using Records = std::vector<Record>;


bool Database::checkConnection() {
	/*Checking connection function */

	rc = sqlite3_open("warehouse.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return false;
	}
	else {
		return true;
	}
}

int Database::callback(void* data, int argc, char** argv, char** azColName) {
	int i;

	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}

	printf("\n");
	return 0;
}

/*void Database::createTable() {

	if(checkConnection()){


	sql = "CREATE TABLE EMPLOYERS("  \
		"ID INTEGER PRIMARY KEY     NOT NULL," \
		"NAME           TEXT    NOT NULL," \
		"SURNAME        TEXT    NOT NULL," \
		"PHONE			TEXT	NOT NULL," \
		"BIRTHDATE		DATE	NOT NULL"	\
		"PESEL          INTEGER     NOT NULL);";


	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Table created successfully\n");
	}
	sqlite3_close(db);
	}
}
*/

void Database::executeQuery(std::string sql_string) {
	rc = sqlite3_open("warehouse.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
	}
	else {

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			std::cout << "Operation done successfully\n";
		}
		sqlite3_close(db);
	}

}




void Database::addClientToDB(std::string name, std::string surname, std::string phone_number, std::string zip_code, std::string address) {
	
		sql_string = "INSERT INTO CLIENTS (NAME, SURNAME, PHONE_NUMBER, ZIP_CODE, ADDRESS) VALUES ('" + name + "', '" + surname + "', " + phone_number + ", '" + zip_code + "','" + address + "'); ";
		executeQuery(sql_string);
}


void Database::addEmployeeToDB(std::string name, std::string surname, std::string position, std::string phone_number, std::string pesel, std::string birth_date, std::string password) {

		sql_string = "INSERT INTO EMPLOYERS (NAME, SURNAME, POSITION, PHONE_NUMBER, PESEL, BIRTH_DATE, PASSWORD) VALUES ('" + name + "', '" + surname + "', '" + position + "', " + phone_number + "," + pesel + ", '" + birth_date + "', '"+ password + "'); ";

		executeQuery(sql_string);
}


int Database::select_callback(void* p_data, int num_fields, char** p_fields, char** p_col_names)
{
	Records* records = static_cast<Records*>(p_data);

	try {
		records->emplace_back(p_fields, p_fields + num_fields);
	}
	catch (...) {
		// abort select on failure, don't let exception propogate thru sqlite3 call-stack
		return 1;
	}
	return 0;
}

Records Database::select_stmt(const char* stmt)
{
	Records records;
	char* errmsg;

	int ret = sqlite3_exec(db, stmt, select_callback, &records, &errmsg);

	if (ret != SQLITE_OK) {
		std::cerr << "Error in select statement " << stmt << "[" << errmsg << "]\n";
	}
	else {
		std::cerr << records.size() << " records returned.\n";
	}

	return records;
}

void Database::sql_stmt(const char* stmt)
{
	char* errmsg;

	int ret = sqlite3_exec(db, stmt, 0, 0, &errmsg);
	if (ret != SQLITE_OK) {
		std::cerr << "Error in select statement " << stmt << "[" << errmsg << "]\n";
	}
}


std::string Database::login(std::string user, std::string password) {

	std::string str;
	sql_string = "SELECT POSITION FROM EMPLOYERS WHERE ID = " + user + " AND PASSWORD ='" + password + "'";
	sql = sql_string.c_str();

	if (checkConnection()) {

		Records records = select_stmt(sql);

		for (auto& record : records) {

			for (auto& record2 : record) {

				str = record2;
			}
		}

		std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
		// lambda expresion C++14
		return str;
	}

	return "";
}


void Database::addItem(std::string product_name, int amount) {

	if (checkConnection()) {

		std::string str = std::to_string(amount);

		sql_string = "INSERT INTO ITEMS (NAME, AMOUNT) VALUES ('" + product_name + "', '" + str + "'); ";
		// please fix
		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			std::cout << "Records created successfully\n";
		}
		sqlite3_close(db);
	}
}


void Database::showOrder(std::string order_id) {

	if (checkConnection()) {

		sql_string = "SELECT * FROM ORDERS WHERE ID =" + order_id + "";// please fix
		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}


		sql_string = "SELECT * FROM PRODUCTS WHERE ORDER_ID =" + order_id + "";// please fix
		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}

		sqlite3_close(db);
	}
}


void Database::showAllOrders(std::string employee_id) {

	if (checkConnection()) {

		std::string str = "";
		sql_string = "SELECT ID FROM ORDERS";
		sql = sql_string.c_str();

		Records records = select_stmt(sql);
		Record  n_records;

		for (auto& record : records) {

			n_records.push_back(record[0]);
		}

		for (auto& record : n_records) {

			sql_string = "SELECT * FROM ORDERS WHERE ID =" + record + "";// please fix
			sql = sql_string.c_str();

			rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}


			sql_string = "SELECT * FROM PRODUCTS WHERE ORDER_ID =" + record + "";// please fix
			sql = sql_string.c_str();

			rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
		}

		sqlite3_close(db);
	}
}