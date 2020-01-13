#ifndef DRIVER_H
#define DRIVER_H
#include "Quest.h"
#include "Employee.h"

class Driver : Employee {

private:
	Quest quest;

	void deselectOrder();

private:

	Order* showOrders();
};

#endif
