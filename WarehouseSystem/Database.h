#include <string>
#include <iostream>
#include <sqlite3.h>

class Database
{
public:
	bool checkConnection();

	static int callback(void* NotUsed, int argc, char** argv, char** azColName);

	void createTable();

	void addPersonToDB(std::string table_name, std::string name, std::string surname, std::string phone_number, std::string birth_date, std::string pesel);

	void addUserToDB(std::string login, std::string password);

	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	std::string sql_string;
	const char* sql;
};

