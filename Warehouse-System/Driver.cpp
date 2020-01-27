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

	OrdersControlSystem object;

	while (true) {
		std::string str;

		std::cout << "Choose : show all (order(s)), show, deselect (order), (show) complited, read, send (message), logout" << std::endl;
		//std::cin >> str;

		//Test
		str = "";
		std::cout << "b³¹d - nieznana komenda";
		//Test2
		str = "show all";
		if(str == "show all")
		{
			object.showListOfOrdres();
		}
		else std::cout << "b³¹d - nieznana komenda";
		//Test3
		
		if (str == "show all")
		{

		}
		else	if (str == "show")
		{

		}

			
		else if (str == "deselect")
		{
			std::string id, status;
			std::cout << "id";
			std::cin >> id;
			std::cout << "status";
			std::cin >> status;
			deselectOrder(id, status);
		}

		else	if (str == "complited")
		{//deselect();
		}

		else	if (str == "read")
		{//read();
		}

		else	if (str == "send")
		{//send();
		}

		else	if (str == "logout")
		{//logout();
		}

		else
			std::cout << "b³¹d - nieznana komenda";
		
		
	}
}