#include <iostream>
#include <string>
#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Boss.h"
#include "MagazineWorker.h"

Boss::Boss(int n_id) : Employee(n_id) {}

void Boss::bossMenu() {
	OrdersControlSystem oCSys;
	OrderCreationInterface oCInter;
	Messenger mess;


	std::string order_id, name, amount, messageID, message, receiver, status, sender;
	std::string str;

	while (true) {

		std::cout << "Choose : show, show all (order(s)), add (item or product), shortages, read, send (message), logout" << std::endl;

		std::cin >> str;


		if (str == "show all" || str == "all") {

			oCSys.showListOfOrdres();
		}
		if (str == "show") {

			std::cout << "Order's id : ";
			std::cin >> order_id;
			oCSys.showOrder(order_id);
		}
		if (str == "add") {
			std::cout << "Choose : item, product" << std::endl;
			std::cin >> str;

			if (str == "item") {
				std::cout << "Item's name : ";
				std::cin >> name;
				std::cout << "Amount : ";
				std::cin >> amount;
				oCInter.addItem(name, amount);
			}
			if (str == "product") {
				std::cout << "Product's name : ";
				std::cin >> name;
				std::cout << "Amount : ";
				std::cin >> amount;
				std::cout << "Order id : ";
				std::cin >> order_id;
				std::cout << "Status : ";
				std::cin >> status;
				oCInter.addProduct(name, amount, order_id, status);
			}
			
		}
		if (str == "shortages") {
			int n_id = 0;
			MagazineWorker shortages(n_id);
			shortages.showShortages();
		}	
		if (str == "read") {

			std::cout << "Massage's id : ";
			std::cin >> messageID;
			mess.readMessage(messageID);
		}
		if (str == "send") {
			int id;
			std::cout << "Your id : ";
			std::cin >> sender;
			std::cout << "Receiver's id : ";
			std::cin >> id;
			std::cout << "Massage : ";
			std::cin >> message;
			//std::string ss = std::to_string(id);
			mess.sendMessage(message, receiver, sender);
		}
		if (str == "logout") {
			return;
		}
	}
}
