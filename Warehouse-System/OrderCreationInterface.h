#pragma once

#include "Database.h"
#include <string>


class OrderCreationInteface : Database {
	friend class Boss;
	friend class Seller;
	
public:
	void createOrder(std::string order);

	void addProduct(std::string product);
	void sendOrder(std::string order);
};
