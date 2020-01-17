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
		if('show all' || 'all'){
			    // TO DO
		}
		if('show'){
			    // TO DO
		}
		if('shortages'){
			    // TO DO
		}
		if('read'){
			    // TO DO
		}
		if('send'){
			    // TO DO
		}
		if('logout'){
			return;
		}
	}
}