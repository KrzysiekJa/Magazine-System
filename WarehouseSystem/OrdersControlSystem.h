#ifndef ORDERSCONTROLSYSTEM_H
#define ORDERSCONTROLSYSTEM_H
#include "Quest.h"
class OrdersControlSystem {

private:
	Quest quest;
	//Order list_of_orders[];
	int number_of_orders;

	void saveToDB();

	Order loadFromDB();

public:
	void getNewOrder();

	Order showListOfOrdres();

	Order showOrder();

private:
	Order sendQuest();
};

#endif
