#ifndef ORDER_H
#define ORDER_H
#include <string>
class Order {

private:
	std::vector<int> id;
	std::string products[];
	bool productsStatus;
	std::string status;
};

#endif
