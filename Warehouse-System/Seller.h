#pragma once

#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class Seller : Employee {
public:
	Seller(int n_id);

	void sellerMenu() {};

	//Receipt receipt; niezidentyfikowany identyfikator przesloniecia

};
