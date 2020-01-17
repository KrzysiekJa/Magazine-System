#ifndef DRIVER_H
#define DRIVER_H
#include "Quest.h"
#include "Employee.h"
#include <string>

class Driver : Employee {
public:
	Driver(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);
	
	void menu(){}
	
private:
	Quest quest;

	void deselectOrder();
	
	std::string getInformationClient(int client_id);
};

#endif
