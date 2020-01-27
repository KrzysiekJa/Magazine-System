#include <iostream>
#include <cstdlib>
#include <string>
#include "Database.h"
#include "Boss.h"
#include "Seller.h"
#include "MagazineWorker.h"
#include "Driver.h"
#include "Client.h"
#include "functions.cpp"

int main(){
	Database db;
	std::string id_str, password_str, str, name, surname, position, phone_number, zip_code, address, pesel, birth_date;

	while (true) {

		std::cout << "Choose one: create (new employee), login, exit" << std::endl;
		std::cin >> str;

		if (str == "create") {
			std::cout << "Of client or of employee : ";
			std::cin >> str;

			if (str == "client") {
				std::cout << "Name: ";
				std::cin >> name;

				std::cout << "Surname: ";
				std::cin >> surname;

				std::cout << "Phone number: ";
				std::cin >> phone_number;

				std::cout << "Zip code: ";
				std::cin >> zip_code;

				std::cout << "Adress: ";
				std::cin >> address;

				db.addClientToDB(name, surname, phone_number, zip_code, address);
			}
			if (str == "employee") {
				std::cout << "Name: ";
				std::cin >> name;

				std::cout << "Surname: ";
				std::cin >> surname;
				
				password_str = functions::login();
				
				std::cout <<std::endl << "Position: ";
				std::cin >> position;

				std::cout << "Phone number: ";
				std::cin >> phone_number;

				std::cout << "Pesel: ";
				std::cin >> pesel;

				std::cout << "Birth date: ";
				std::cin >> birth_date;

				db.addEmployeeToDB(name, surname, position, phone_number, pesel, birth_date, password_str);
				password_str = "";
			}
		}
		if (str == "login") {

			std::cout << "Your id : ";
			std::cin >> id_str;
			
			std::cout << "Your password : ";
			std::cin >> password_str;
			
			str = db.login(id_str, password_str);
			password_str = "";
			
			if (str == "boss") {
				std::cout << "Logged as boss" << std::endl;
				Boss boss(std::stoi(id_str));
				boss.bossMenu();
			}
			if (str == "seller") {
				std::cout << "Logged as seller" << std::endl;
				Seller seller(std::stoi(id_str));
				seller.sellerMenu();
			}
			if (str == "magazineworker") {
				std::cout << "Logged as magazineworker" << std::endl;
				MagazineWorker worker(std::stoi(id_str));
				worker.workerMenu();
			}
			if (str == "driver") {
				std::cout << "Logged as driver" << std::endl;
				Driver driver(std::stoi(id_str));
				driver.driverMenu();
			}
			id_str = "";
		}
		if (str == "exit") {
			exit(0);
		}
	}

}
