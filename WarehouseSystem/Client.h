#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Person.h"
#include "OrdersControlSystem.h"
#include "Receipt.h"
#include "Client.h"
#include "ClientInformation.h"


class Client : Person, OrdersControlSystem {
	friend Driver::getInformationClient;

public:
	Receipt receipt[];
	std::string zip_code;
	std::string adress;

	Client(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nzip_code, std::string Nadress);
	
	showReceipts();

};

#endif
