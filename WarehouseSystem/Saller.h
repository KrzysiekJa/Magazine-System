#ifndef SALLER_H
#define SALLER_H

class Saller : Employee {

private:
	Receipt receipt;

	/**
	 * Uzupe�ni�
	 */
	Order createOrder(Order order);

	Receipt sendReceipt(string text);

public:
	void sendMessage(string message, string receiver);
};

#endif
