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

	OrdersControlSystem oCSys;
	Messenger mess;

	while (true) {
		std::string str;

		std::cout << "Choose : show all (order(s)), show, deselect (order), (show) complited, read, send (message), logout" << std::endl;
		
		std::cin >> str;
		if (str == "show all")
		{
			oCSys.showListOfOrdres();
		}
		if (str == "show")
		{
			std::cout << "Order's id : ";
			std::string order_id;
			std::cin >> order_id;
			oCSys.showOrder(order_id);
		}

			
	    if (str == "deselect")
		{
			std::string id, status;
			std::cout << "id";
			std::cin >> id;
			std::cout << "status";
			std::cin >> status;
			deselectOrder(id, status);
		}

	    if (str == "complited")
		{
			std::string id, status;
			std::cout << "id";
			std::cin >> id;
			std::cout << "status";
			std::cin >> status;
			oCSys.changeStatus(id, status);
		}

		if (str == "read")
		{
			std::string messageID;
			std::cout << "Massage's id : ";
			std::cin >> messageID;
			mess.readMessage(messageID);
		}

		if (str == "send")
		{
			std::string message,sender,receiver;
			std::cout << "Your id : ";
			std::cin >> sender;
			std::cout << "Receiver's id : ";
			std::cin >> receiver;
			std::cout << "Massage : ";
			std::cin >> message;
			mess.sendMessage(message, receiver, sender);
		}

		if (str == "logout")
		{
			return;
		}

		
		
	}

}