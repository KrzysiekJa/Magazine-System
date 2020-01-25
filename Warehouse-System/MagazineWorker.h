#pragma once

#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class MagazineWorker : public Database, public Employee {
public:
	MagazineWorker(int n_id);

	void workerMenu() {};

private:

	void reportShortages(std::string id);

	void sendOdrerToDriver(std::string id);
	// they rather to delete
};
