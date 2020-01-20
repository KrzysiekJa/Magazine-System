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
	//Database db.checkConnection();
	std::string str;
	
	while(true){
		
		std::cout << "Choose one: create (new employee), login, exit" << std::endl;
		std::cin >> str;
		
		if(str == "create"){
			std::cout << "Of client or of employee : ";
			std::cin >> str;
			
			if(str == "client"){
				//db.addClientToDB();
				// o ile sie nie obrazisz ;)
			}
			if(str == "employee"){
				//db.addEmployeeToDB();
			}
		}
		if(str == "login"){
			/*std::string id_str, password_str;
			
			std::cout << "Your id : ";
			std::cin << id_str;
			std::cout << "Your password : ";
			std::cin << password_str; */
			
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
