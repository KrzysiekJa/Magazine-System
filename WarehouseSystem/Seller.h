#ifndef SALLER_H
#define SALLER_H
#include <string>
#include "Employee.h"

class Seller : Employee {

private:
	Receipt receipt;

	/**
	 * Uzupelnie
	 */
	Order createOrder(Order order);

	Receipt sendReceipt(std::string text);

};

#endif
