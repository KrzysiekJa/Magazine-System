#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee : Person, OrdersControlSystem {

protected:
	string birth_date;
	int    pesel;

	Person(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);
	
	void personShowData();
};

#endif
