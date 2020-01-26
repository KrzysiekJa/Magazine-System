#include <string>
#include <iostream>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Driver.h"


Driver::Driver(int n_id) : Employee(n_id) {}


void Driver::deselectOrder(std::string id, std::string status) {

		sql_string = "UPDATE ORDERS SET STATUS = '" + status + "' WHERE ID = " + id + "";
		executeQuery(sql_string);
}

void Driver::getInformationClient(std::string client_id) {

		sql_string = "SELECT NAME, SURNAME, PHONE_NUMBER, PHONE_NUMBER, ZIP_CODE, ADDRESS FROM CLIENTS WHERE ID =" + client_id + "";
		executeQuery(sql_string);

}


void Driver::driverMenu() {
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