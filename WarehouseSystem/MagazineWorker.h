#ifndef MAGAZINEWORKER_H
#define MAGAZINEWORKER_H
#include "Employee.h"


class MagazineWorker : Employee {
public:
	MagazineWorker(int n_id);
	
	void menu(){};

private:

	std::string reportShortages();

	Order sendOdrerToDriver();
	// they rather to delete
};

#endif
