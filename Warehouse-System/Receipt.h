#pragma once

#include <string>
#include "Database.h"
class Receipt : Database{

private:
	std::string* data;

public:
	Receipt create(std::string owner_id, std::string order_id, std::string data);
};
