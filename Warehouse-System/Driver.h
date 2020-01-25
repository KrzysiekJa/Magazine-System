#pragma once

#include "Employee.h"
#include <string>


class Driver : Employee {
public:
	Driver(int n_id);

	void driverMenu() {}

private:
	std::string quest;

	void deselectOrder();

	std::string getInformationClient(int client_id);
};
