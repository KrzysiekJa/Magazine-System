#ifndef SALLER_H
#define SALLER_H
#include "Database.h"
#include "Employee.h"
#include "OrderCreationInteface.h"



class Seller : Employee, OrderCreationInteface{
public:
	Seller(int n_id);
	
	void menu(){};

	Receipt receipt;
	Database db;
	
private:
	void createOrder(std::string product_name, std::string product_amount);

	Receipt sendReceipt(std::string text);

};

#endif
