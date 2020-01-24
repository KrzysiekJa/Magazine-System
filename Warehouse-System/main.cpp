#include <iostream>
#include <cstdlib>
#include <string>
#include <conio>
#include "Database.h"
#include "Boss.h"
#include "Seller.h"
#include "MagazineWorker.h"
#include "Driver.h"
#include "Client.h"

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
				
				gotoxy(20,1);
				std::cout << "Password: ";
				std::cin >> password_str;
				
				std::cout << "Position: ";
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
			gotoxy(20,1);
			std::cout << "Your password : ";
			std::cin >> password_str;
			
			// !!! trzeba dodac kolumnę ID !!!
			str = db.login(id_str, password_str);
			password_str = "";
			
			if (str == "Boss") {
				//Boss boss;
				//boss.menu();
			}
			if (str == "Seller") {
				//Seller seller;
				//seller.menu();
			}
			if (str == "MagazineWorker") {
				//MagazineWorker worker;
				//worker.menu();
			}
			if (str == "Driver") {
				//Driver driver;
				//driver.menu();
			}
			id_str = "";
		}
		if (str == "exit") {
			exit(0);
		}
	}

}
