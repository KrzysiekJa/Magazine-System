#pragma once

#include "Database.h"
#include <string>


class OrderCreationInterface : public Database {
	friend class Boss;
	friend class Seller;
	
public:
	void createOrder(std::string client_id, std::string status); // po co ten status; zawsze: in colection (cz jakoś tak ;) )

	void addProduct(std::string name, std::string amount, std::string order_id, std::string status);
	
	void sendOrder(std::string id);
	
	void addItem(std::string name, std::string amount);
};
