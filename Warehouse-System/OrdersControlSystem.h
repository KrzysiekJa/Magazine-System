#pragma once

#include "Database.h"


class OrdersControlSystem : public Database {

private:
	//Order list_of_orders[];
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