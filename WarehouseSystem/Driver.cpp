#include "Driver.h"
#include <string>
#include "Order.h"


Driver::Driver(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
		Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}


void Driver::deselectOrder() {
	// TODO - implement Driver::deselectOrder
	throw "Not yet implemented";
}

string Driver::getInformationClient(int client_id){
	
	string zip_code, adress;
	// znalezc cleinta w bazie
	// pobrac zipp_code adress
	
	string str = zip_code.append(", ");
	str.append(adress);
	
	return str;
}


void menu(){
	while(true){
		std::string str;
		
		std::cout << "Choose : show all (order(s)), show, deselect(order), (show) complited, read, send (message), logout" << std::endl;
		std::cin >> str;
		
		switch(str){
			
			case 'show all':
			case 'all':
			    // TO DO
			case 'show':
			    // TO DO
				break;
			case 'deselect':
			    // TO DO
			    break;
			case 'complited':
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