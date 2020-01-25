#pragma once

#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class Driver : Employee {
public:
	Driver(int n_id);

	void driverMenu() {}

private:
	std::string quest;

	void deselectOrder();

	std::string getInformationClient(int client_id);
};
