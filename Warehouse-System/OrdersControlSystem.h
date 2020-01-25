#pragma once

#include "Database.h"
#include <string>


class OrdersControlSystem : Database {
	friend class Boss;
	friend class Seller;
	friend class Driver;
	friend class MagazineWorker;
	
private:

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