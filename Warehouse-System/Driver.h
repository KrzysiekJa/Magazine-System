#pragma once

#include "Employee.h"
#include <string>


class Driver : public Employee {
public:
	Driver(int n_id);

	void driverMenu() {}

private:
	std::string quest;

	void deselectOrder(std::string id, std::string status);

	std::string getInformationClient(std::string client_id);
};
