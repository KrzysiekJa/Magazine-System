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
		
		switch(str){
			
			case 'show all':
			case 'all':
			    // TO DO
			case 'show':
			    // TO DO
				break;
			case 'shortages':
			    // TO DO
			    break;
			case 'read':
			    // TO DO
				break;
			case 'send':
			    // TO DO
			    break;
			case 'logout':
			    return;
			default:
			   	break;
		}
	}
}