#pragma once

#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class Driver : public Employee {
public:
	Driver(int n_id);

	void driverMenu() {}

private:
	std::string quest;

	void deselectOrder(std::string id, std::string status);

	void getInformationClient(std::string client_id);
};
