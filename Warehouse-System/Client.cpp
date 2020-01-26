#include "Client.h"
#include <string>

Client::Client(int n_id) : Person(n_id) {}

void Client::showReceipts(std::string id) { 

		sql_string = "SELECT ID, ORDER_ID FROM RECEIPTS WHERE OWNER_ID =" + id + "";
		executeQuery(sql_string);
}