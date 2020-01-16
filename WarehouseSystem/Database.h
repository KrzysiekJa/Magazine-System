#include <string>
#include <iostream>

class Database
{
	void checkConnection();

	int createTable();


	void addEmployerToDB(std::string name, std::string surname, std::string pesel);


	void addClientToDB(std::string name, std::string surname, std::string pesel);


	void addUserToDB(std::string login, std::string password);
};

