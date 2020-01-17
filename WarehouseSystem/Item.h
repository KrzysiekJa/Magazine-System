#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
	int amount_in_magazine;
	
	Item(std::string n_name, int n_amount_in_magazine): name(n_name), amount_in_magazine(n_amount_in_magazine){}
	
private:
	std::string name;
};

#endif
