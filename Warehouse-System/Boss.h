#pragma once

#include "Employee.h"
#include "OrderCreationInterface.h"

//class Boss : Employee, OrderCreationInterface {
//nie mozna rozpoznac klasy OrderCreationInterface
class Boss : Employee {

public:
	Boss(int n_id);

	void bossMenu() {};
};
