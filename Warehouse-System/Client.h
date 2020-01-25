#pragma once

#include "Person.h"
#include "OrdersControlSystem.h"
#include "Receipt.h"
#include "Client.h"
#include "Driver.h"


class Client : public Person, public OrdersControlSystem {

public:

	Client(int n_id);

	void showReceipts();

};
