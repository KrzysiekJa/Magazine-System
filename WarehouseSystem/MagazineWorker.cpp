#include <iostream>
#include <string>
#include "MagazineWorker.h"
#include "Order.h"


MagazineWorker::MagazineWorker(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}


std::string MagazineWorker::reportShortages() {
	// TODO - implement MagazineWorker::reportShortages
	throw "Not yet implemented";
}

Order MagazineWorker::sendOdrerToDriver() {
	// TODO - implement MagazineWorker::sendOdrerToDriver
	throw "Not yet implemented";
}

void menu(){
	while(true){
		std::string str;
		
		std::cout << "Choose : show, show all (order(s)), (match) complited, (report) shortages, read, send (message), logout" << std::endl;
		std::cin >> str;
		
		
		if(str == "show all" || str == "all"){
			    // TO DO
		}
		if(str == "show"){
			    // TO DO
		}
		if(str == "complited"){
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