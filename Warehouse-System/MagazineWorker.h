#pragma once

#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"


class MagazineWorker : public virtual Database, public Employee {
public:
	MagazineWorker(int n_id);

	void workerMenu();
	void showShortages();
private:

	void reportShortages(std::string id);

	
};
