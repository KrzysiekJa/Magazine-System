#include <string>
#include <iostream>

class Database
{
public:
	bool checkConnection();

	void createTable();

	void addPersonToDB(std::string table_name, std::string name, std::string surname, std::string phone_number, std::string birth_date, std::string pesel);

	void addUserToDB(std::string login, std::string password);
};

