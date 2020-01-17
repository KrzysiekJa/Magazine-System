#include <string>
#include "Seller.h"
#include "Order.h"
#include "Receipt.h"


Seller::Seller(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}

Order Saller::createOrder(Order order) {
	// TODO - implement Saller::createOrder
	throw "Not yet implemented";
}

Receipt Seller::sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}

void menu(){
	while(true){
		std::string str;
		
		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;
		
		switch(str){
			
			case 'create':
				// TO DO
				break;
			case 'show all':
			case 'all':
			    // TO DO
				break;
			case 'add':
			    // TO DO
			    break;
			case 'receipt':
			    // TO DO
			    break;
			case 'read':
			    // TO DO
				break;
			case 'send':
			    // TO DO
			    break;
			case 'logout':
			    return;
			default:
			   	break;
		}
	}
}