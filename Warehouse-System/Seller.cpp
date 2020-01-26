#include <string>
#include <iostream>
#include "Employee.h"
#include "Seller.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


Seller::Seller(int n_id) : Employee(n_id) {}


void sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}

void sellerMenu() {
	while (true) {
		OrdersControlSystem oCSys;
		OrderCreationInterface oCInter;
		Messenger mess;
		
		std::string str;
		std::string client_id, status, name, amount, messageID, message, receiver;
		
		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "create") {
			
			std::cout << "Client's id : ";
			std::cin >> client_id;
			std::cout << "Product's status : " ;
			std::cin >> status;
			oCInter.createOrder(client_id, status);
		}
		if (str == "show all" || str == "all") {
			
			oCSys.showListOfOrdres();
		}
		if (str == "add") {
			
			std::cout << "Product's name : ";
			std::cin >> name;
			std::cout << "Amount : " ;
			std::cin >> amount;
			oCInter.addItem(name, amount);
		}
		if (str == "receipt") {
			// TO DO
		}
		if (str == "read") {
			
			std::cout << "Massage's id : ";
			std::cin >> messageID;
			mess.readMessage(messageID);
		}
		if (str == "send") {
			std::cout << "Sender id : ";
			int id; //brakowalo zmiennej
			std::cin >> id;
			
			std::cout << "Receiver's id : ";
			std::cin >> receiver;
			std::cout << "Massage : ";
			std::cin >> message;
			std::string ss = std::to_string(id);
			mess.sendMessage(message, receiver, ss);
		}
		if (str == "logout") {
			return;
		}
	}
}