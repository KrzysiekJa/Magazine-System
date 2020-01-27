#pragma once

#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Database.h"

class Seller : public Employee{

public:
	Seller(int n_id);

	void sellerMenu();
	void sendReceipt(std::string receipt_id);
	//Receipt receipt; niezidentyfikowany identyfikator przesloniecia

};
