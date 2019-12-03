#ifndef DRIVER_H
#define DRIVER_H

class Driver : Employee {

private:
	Quest quest;

	void deselectOrder();

private:
	void sendMessage(string message, string receiver);

	Order* showOrders();
};

#endif
