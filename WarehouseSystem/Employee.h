#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : Person {

protected:
	string birth_date;
	int pesel;

	string sendMessage();

	void showOrders();
};

#endif
