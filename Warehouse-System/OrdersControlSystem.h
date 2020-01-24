#pragma once

#include "Database.h"


class OrdersControlSystem : Database {

private:
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