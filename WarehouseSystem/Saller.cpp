#include <string>
#include "Saller.h"


Seller::Seller(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}

Order Saller::createOrder(Order order) {
	// TODO - implement Saller::createOrder
	throw "Not yet implemented";
}

Receipt Saller::sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}
