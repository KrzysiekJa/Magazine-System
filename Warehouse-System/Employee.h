#pragma once

#include "Person.h"
#include "Messenger.h"
#include "OrdersControlSystem.h"
#include "Database.h"


class Employee : Person, OrdersControlSystem, Messenger {

protected:

	Employee(int n_id);

	void personShowData();
};
