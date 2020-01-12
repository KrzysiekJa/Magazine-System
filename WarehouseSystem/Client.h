#ifndef CLIENT_H
#define CLIENT_H

class Client : Person, OrdersControlSystem {

public:
	Receipt * receipt;

	Clien(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid);
	
	showReceipts();
};

#endif
