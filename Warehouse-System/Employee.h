#pragma once

#include "Person.h"
#include "Messenger.h"
#include "OrdersControlSystem.h"
#include "Database.h"


class Employee : public Person, public OrdersControlSystem, public Messenger {

protected:

	Employee(int n_id);

	void personShowData(std::string id);
};
