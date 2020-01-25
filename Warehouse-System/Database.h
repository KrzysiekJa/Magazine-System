#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <sqlite3.h>

using Record = std::vector<std::string>;
using Records = std::vector<Record>;


class Database {
	friend class Driver;
public:
	//void createTable();

	void addClientToDB(std::string name, std::string surname, std::string phone_number, std::string zip_code, std::string address);
	void addEmployeeToDB(std::string name, std::string surname, std::string position, std::string phone_number, std::string pesel, 
						 std::string birth_date, std::string password);
	std::string login(std::string username, std::string password);
	
	void addItem(std::string product_name, int amount);
	void showOrder(std::string order_id);
	void showAllOrders(std::string employee_id);

	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	std::string sql_string;
	const char* sql;
	const char* data = "Callback function called";
	
private:
	bool checkConnection();

	static int callback(void* NotUsed, int argc, char** argv, char** azColName);
	static int select_callback(void *p_data, int num_fields, char **p_fields, char **p_col_names);
	
	Records	select_stmt(const char* stmt);
	void 	sql_stmt(const char* stmt);
};

