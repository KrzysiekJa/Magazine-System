#include <string>
#include <iostream>
#include "Seller.h"
#include "Receipt.h"

Seller::Seller(int n_id) : Employee(n_id) {}


Receipt sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}

void sellerMenu() {
	while (true) {
		std::string str;

		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "create") {
			// TO DO
		}
		if (str == "show all" || str == "all") {
			// TO DO
		}
		if (str == "add") {
			// TO DO
		}
		if (str == "receipt") {
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