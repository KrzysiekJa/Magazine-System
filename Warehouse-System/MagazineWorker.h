#pragma once

#include "Employee.h"


class MagazineWorker : public Employee {
public:
	MagazineWorker(int n_id);

	void workerMenu() {};

private:

	std::string reportShortages();

	void sendOdrerToDriver();
	// they rather to delete
};
