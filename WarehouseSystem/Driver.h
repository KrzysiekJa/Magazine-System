#ifndef DRIVER_H
#define DRIVER_H
#include "Quest.h"
#include "Employee.h"

class Driver : Employee {
public:
	Driver(int n_id);
	
	void menu(){}
	
private:
	Quest quest;

	void deselectOrder();
	
	std::string getInformationClient(int client_id);
};

#endif
