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