#ifndef BOSS_H
#define BOSS_H
#include "Employee.h"


class Boss : Employee, OrderCreationInteface {

public:
	Boss(int n_id);
	
	void menu(){};
};

#endif
