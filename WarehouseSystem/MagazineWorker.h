#ifndef MAGAZINEWORKER_H
#define MAGAZINEWORKER_H
#include "Employee.h"
#include <string>
class MagazineWorker : Employee {


private:
	void deselectItem();

	std::string reportShortages();

	Order sendOdrerToDriver();

};

#endif
