#ifndef ORDERCREATIONINTEFACE_H
#define ORDERCREATIONINTEFACE_H
#include "Database.h"


class OrderCreationInteface : Database {

private:
	Order temporally_order;

public:
	Order createOrder(Order order);


	Order sendOrder(Order order);
};

#endif
