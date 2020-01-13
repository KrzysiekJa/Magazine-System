#ifndef CLIENT_H
#define CLIENT_H
#include <string>

class Client : Person, OrdersControlSystem {

public:
	Receipt * receipt;
	// to do !!!

	Clien(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid);
	
	showReceipts();
};

#endif
