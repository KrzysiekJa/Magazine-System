#ifndef PRODUCT_H
#define PRODUCT_H
#include "Item.h"

class Product {
public:
	Product::Product(Item n_item, int n_amount):item(n_item), amount(n_amount){}
	
private:
	Item item;
	int amount;
};

#endif
