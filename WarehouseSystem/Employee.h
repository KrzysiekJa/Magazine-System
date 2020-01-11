#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee : Person {

protected:
	string birth_date;
	int    pesel;


	void sendMessage(string message, string receiver, string sender);
	string checkMessages(string sender, string receiver);
	void showOrders();
};

#endif
