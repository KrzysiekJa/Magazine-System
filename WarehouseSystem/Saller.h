#ifndef SALLER_H
#define SALLER_H

class Saller : Employee {

private:
	Receipt receipt;

	/**
	 * Uzupelnie
	 */
	Order createOrder(Order order);

	Receipt sendReceipt(string text);

};

#endif
