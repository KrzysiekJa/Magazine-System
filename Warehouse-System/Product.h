#pragma once

#include "Item.h"

class Product {
public:
	Product(Item n_item, int n_amount) :item(n_item), amount(n_amount) {}

private:
	Item item;
	int amount;
};
