#pragma once

#include "Database.h"
#include "Order.h"
#include "Product.h"


class OrderCreationInteface : Database {

private:
	Order temporally_order;

public:
	Order createOrder(Order order);

	Product addProduct(Product product);
	Order sendOrder(Order order);
};
