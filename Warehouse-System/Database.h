#pragma once

#include <string>
#include <iostream>
#include <sqlite3.h>


class Database {
public:
	bool checkConnection();

	static int callback(void* NotUsed, int argc, char** argv, char** azColName);


	//void createTable();

	void addClientToDB(std::string name, std::string surname, std::string phone_number, std::string zip_code, std::string address);
	void addEmployeeToDB(std::string name, std::string surname, std::string phone_number, std::string pesel, std::string birth_date);
	void login(std::string username, std::string password);

	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	std::string sql_string;
	const char* sql;
	const char* data = "Callback function called";
};

