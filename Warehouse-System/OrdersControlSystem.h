#pragma once

#include "Database.h"
#include <string>


<<<<<<< HEAD
class OrdersControlSystem : Database {
	friend class Boss;
	friend class Seller;
	friend class Driver;
	friend class MagazineWorker;
	
=======
class OrdersControlSystem : public Database {

>>>>>>> 7dca77804ce95cdedc5bb66a7791c64b0153c9f4
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