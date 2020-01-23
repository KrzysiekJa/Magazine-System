#pragma once

#include <string>
class Receipt {

private:
	std::string* data;

public:
	Receipt create(std::string text);
};
