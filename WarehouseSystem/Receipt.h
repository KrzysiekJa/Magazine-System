#ifndef RECEIPT_H
#define RECEIPT_H
#include <string>
class Receipt {

private:
	std::string data[];

public:
	Receipt create(std::string text);
};

#endif
