#pragma once

#include "Database.h"
#include <string>


class OrdersControlSystem : public Database {
	friend class Boss;
	friend class Seller;
	friend class Driver;
	friend class MagazineWorker;

private:

	int number_of_orders;

	//void saveToDB();
	//void loadFromDB();

public:
	void getNewOrder();

	void showListOfOrdres();

	void showOrder(std::string id);
	
	void changeStatus(std::string id, std::string status);
	
	void sendToDriver(std::string id, std::string status);

};