#include <string>
#include <iostream>
#include <string>
#include "Database.h"
#include "Boss.h"

Boss::Boss(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
		Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}

void menu(){
	while(true){
		std::string str;
		
		std::cout << "Choose : show, show all (order(s)), shortages, read, send (message), logout" << std::endl;
		std::cin >> str;
					

		}
		if(str == "show all" || str == "all"){
			    // TO DO
		}
		if(str == "show"){
			    // TO DO
		}
		if(str == "shortages"){
			    // TO DO
		}
		if(str == "read"){
			    // TO DO
		}
		if(str == "send"){
			    // TO DO
		}
		if(str == "logout"){
			return;
		}
	}
}