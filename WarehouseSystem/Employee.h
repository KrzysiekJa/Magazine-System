#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include "Person.h"
#include "Messenger.h"
#include "OrdersControlSystem.h"


class Employee : Person, OrdersControlSystem, Messenger {

protected:

	Employee(int n_id);
	
	void personShowData();
};

#endif
