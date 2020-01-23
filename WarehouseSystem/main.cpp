#include <iostream>
#include <cstdlib>
#include <string>
#include "Database.h"
#include "Boss.h"
#include "Seller.h"
#include "MagazineWorker.h"
#include "Driver.h"
#include "Client.h"



int main(void)
{
	Database db;
	std::string id_str, password_str, str, name, surname, phone_number, zip_code, address, pesel, birth_date;

	while(true){
		
		std::cout << "Choose one: create (new employee), login, exit" << std::endl;
		std::cin >> str;
		
		if(str == "create"){
			std::cout << "Of client or of employee : ";
			std::cin >> str;
			
			if(str == "client"){
				std::cin >> name;
				std::cin >> surname;
				std::cin >> phone_number;
				std::cin >> zip_code;
				std::cin >> address;

				db.addClientToDB(name, surname, phone_number, zip_code, address);
			}
			if(str == "employee"){
				std::cin >> name;
				std::cin >> surname;
				std::cin >> phone_number;
				std::cin >> pesel;
				std::cin >> birth_date;

				db.addEmployeeToDB(name, surname, phone_number, pesel, birth_date);
			}
		}
		if(str == "login"){
			
			std::cout << "Your id : ";
			std::cin  >> id_str;
			std::cout << "Your password : ";
			std::cin >> password_str; 
			
			// login function
			
			if(str == "Boss"){
				//Boss boss;
				//boss.menu();
			}
			if(str == "Seller"){
				//Seller seller;
				//seller.menu();
			}
			if(str == "MagazineWorker"){
				//MagazineWorker worker;
				//worker.menu();
			}
			if(str == "Driver"){
				//Driver driver;
				//driver.menu();
			}
		}
		if(str == "exit"){
		    exit(0);
		}
	}
	
}
