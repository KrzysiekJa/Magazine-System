#pragma once

#include <string>
#include "Database.h"
class Receipt : public virtual Database{

private:
	std::string* data;

public:
	void create(std::string owner_id, std::string order_id, std::string data);
};
