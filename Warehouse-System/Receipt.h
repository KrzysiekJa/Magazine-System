#pragma once

#include <string>
class Receipt {

private:
	std::string* data;

public:
	Receipt create(std::string owner_id, std::string order_id, std::string data);
};
