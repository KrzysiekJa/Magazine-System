#include <iostream>
#include <string>
#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Boss.h"


Boss::Boss(int n_id) : Employee(n_id) {}

void bossMenu() {
	OrdersControlSystem oCSys;
	OrderCreationInterface oCInter;
	Messenger mess;
	
	std::string str;
	std::string order_id, name, amount, messageID, message, receiver;

	while (true) {

	std::cout << "Choose : show, show all (order(s)), add (product), shortages, read, send (message), logout" << std::endl;
	std::cin >> str;

	}
	if (str == "show all" || str == "all") {
		
		oCSys.showListOfOrdres();
	}
	if (str == "show") {
		
		std::cout << "Order's id : ";
		std::cin >> order_id;
		oCSys.showOrder(order_id);
	}
	if (str == "add") {
		
		std::cout << "Product's name : ";
		std::cin >> name;
		std::cout << "Amount : " ;
		std::cin >> amount;
		oCInter.addItem(name, amount);
	}
	if (str == "shortages") {
		// TO DO
	}
	if (str == "read") {
		
		std::cout << "Massage's id : ";
		std::cin >> messageID;
		mess.readMessage(messageID);
	}
	if (str == "send") {
		
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
