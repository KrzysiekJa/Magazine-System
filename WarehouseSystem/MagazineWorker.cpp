#include "MagazineWorker.h"
#include <string>
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
		
		switch(str){
			
			case 'show all':
			case 'all':
			    // TO DO
			case 'show':
			    // TO DO
				break;
			case 'complited':
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