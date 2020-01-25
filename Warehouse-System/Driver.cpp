#include <string>
#include <iostream>
#include "Driver.h"


Driver::Driver(int n_id) : Employee(n_id) {}


void Driver::deselectOrder() {
	// TODO - implement Driver::deselectOrder
	throw "Not yet implemented";
}

std::string Driver::getInformationClient(int client_id) {

	std::string zip_code, adress;
	// znalezc cleinta w bazie
	// pobrac zipp_code adress

	std::string str = zip_code.append(", ");
	str.append(adress);

	return str;
}


void driverMenu() {
	while (true) {
		std::string str;

		std::cout << "Choose : show all (order(s)), show, deselect (order), (show) complited, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "show all" || str == "all") {
			// TO DO
		}
		if (str == "show") {
			// TO DO
		}
		if (str == "deselect") {
			// TO DO
		}
		if (str == "complited") {
			// TO DO
		}
		if (str == "read") {
			// TO DO
		}
		if (str == "send") {
			// TO DO
		}
		if (str == "logout") {
			return;
		}
	}
}