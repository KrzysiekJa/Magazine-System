#ifndef SALLER_H
#define SALLER_H
#include "Database.h"
#include <string>
#include "Employee.h"
#include "OrderCreationInteface.h"



class Seller : Employee, OrderCreationInteface, Database {
public:
	Seller(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);

	Receipt receipt;
	
private:
	void createOrder(std::string product_name, std::string product_amount);

	Receipt sendReceipt(std::string text);

};

#endif
