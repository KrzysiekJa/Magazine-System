#pragma once

#include "Database.h"
#include "Employee.h"
#include "OrderCreationInterface.h"


class Seller : public Employee, public OrderCreationInteface {
public:
	Seller(int n_id);

	void sellerMenu() {};

	//Receipt receipt; niezidentyfikowany identyfikator przesloniecia

};
