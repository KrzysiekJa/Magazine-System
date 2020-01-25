#pragma once

#include "Database.h"
#include <string>


class OrderCreationInteface : public Database {

public:
	void createOrder(std::string client_id, std::string status);

	void addProduct(std::string name, std::string amount, std::string order_id, std::string status);
	void sendOrder(std::string id);
	void addItem(std::string name, std::string amount);
};
