#pragma once

#include "Database.h"


class OrdersControlSystem : Database {

private:
	//Order list_of_orders[];
	int number_of_orders;

	void saveToDB();

	void loadFromDB();

public:
	void getNewOrder();

	void showListOfOrdres();

	void showOrder();

private:
	void sendQuest();
};