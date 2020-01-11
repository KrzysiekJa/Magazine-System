#ifndef DRIVER_H
#define DRIVER_H

class Driver : Employee {

private:
	Quest quest;

	void deselectOrder();

private:

	Order* showOrders();
};

#endif
