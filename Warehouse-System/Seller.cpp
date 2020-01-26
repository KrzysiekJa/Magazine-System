#include <string>
#include <iostream>
#include "Employee.h"
#include "Seller.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Receipt.h"
#include "Client.h"


Seller::Seller(int n_id) : Employee(n_id) {}


void Seller::sendReceipt(std::string receipt_id) {

		sql_string = "SELECT OWNER_ID, ORDER_ID, DATA FROM RECEIPTS WHERE ID = " + receipt_id + "";
		executeQuery(sql_string);

}

void Seller::sellerMenu() {
	while (true) {
		OrdersControlSystem oCSys;
		OrderCreationInterface oCInter;
		Messenger mess;

		std::string str;
		std::string client_id, status, name, amount, messageID, message, receiver, order_id, receipt_id, data;

		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "create") {

			std::cout << "Client's id : ";
			std::cin >> client_id;
			std::cout << "Product's status : ";
			std::cin >> status;
			oCInter.createOrder(client_id, status);
		}
		if (str == "show all" || str == "all") {

			oCSys.showListOfOrdres();
		}
		if (str == "add") {

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
		if (str == "receipt") {
			std::cout << "Choose : create, show" << std::endl;
			std::cin >> str;
			if (str == "create") {
				Receipt receipt;
				
				std::cout << "Client's id : ";
				std::cin >> client_id;

				std::cout << "Order id : ";
				std::cin >> order_id;

				std::cout << "Receipt data: ";
				std::cin >> data;
				receipt.create(client_id, order_id, data);

			}
			if (str == "show") {
				std::cout << "Receipt's id : ";
				std::cin >> receipt_id;
				sendReceipt(receipt_id);
			}
		}
		if (str == "read") {

			std::cout << "Massage's id : ";
			std::cin >> messageID;
			mess.readMessage(messageID);
		}
		if (str == "send") {
			std::cout << "Sender id : ";
			int id; 
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