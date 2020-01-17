#ifndef ORDERCREATIONINTEFACE_H
#define ORDERCREATIONINTEFACE_H


class OrderCreationInteface {

private:
	Order temporally_order;

public:
	Order createOrder(Order order);


	Order sendOrder(Order order);
};

#endif
