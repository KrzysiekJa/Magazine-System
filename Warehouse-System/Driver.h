#pragma once

#include "Quest.h"
#include "Employee.h"

class Driver : Employee {
public:
	Driver(int n_id);

	void driverMenu() {}

private:
	Quest quest;

	void deselectOrder();

	std::string getInformationClient(int client_id);
};
