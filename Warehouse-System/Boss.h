#pragma once

#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"



class Boss : public Employee {

public:
	Boss(int n_id);

	void bossMenu();
};
