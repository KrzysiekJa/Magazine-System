#pragma once

#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class MagazineWorker : Employee {
public:
	MagazineWorker(int n_id);

	void workerMenu() {};

private:

	std::string reportShortages();

	void sendOdrerToDriver();
	// they rather to delete
};
