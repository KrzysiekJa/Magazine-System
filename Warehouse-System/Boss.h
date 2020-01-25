#pragma once

#include "Employee.h"
#include "OrderCreationInterface.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"

class Boss : Employee {

public:
	Boss(int n_id);

	void bossMenu() {};
};
