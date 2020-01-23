#pragma once

#include "Database.h"
#include "Employee.h"
#include "OrderCreationInterface.h"

class Seller : Employee, OrderCreationInteface {
public:
	Seller(int n_id);

	void menu() {};

	//Receipt receipt; niezidentyfikowany identyfikator przesloniecia
	//Database db;

private:
	void createOrder(std::string product_name, std::string product_amount);

	//Receipt sendReceipt(std::string text); blad skladniowy "("

};
