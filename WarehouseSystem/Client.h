#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "Person.h"
#include "OrdersControlSystem.h"
#include "Receipt.h"
#include "Client.h"

class Client : Person, OrdersControlSystem {

public:
	Receipt * receipt;

	Client(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid);
	
	showReceipts();
};

#endif
