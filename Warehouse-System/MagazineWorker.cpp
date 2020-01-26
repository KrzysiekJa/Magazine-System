#include <iostream>
#include <string>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "OrderCreationInterface.h"
#include "Messenger.h"
#include "MagazineWorker.h"
#include "Database.h"


MagazineWorker::MagazineWorker(int n_id) : Employee(n_id) {}


void MagazineWorker::reportShortages(std::string id) {
	
	if (checkConnection()) {
		sql_string = "UPDATE PRODUCTS SET STATUS = ' TU WPISAC' WHERE ID = " + id + "";
		sql = sql_string.c_str();


		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db);

}

void MagazineWorker::sendOdrerToDriver(std::string id) {
	
	if (checkConnection()) {
		sql_string = "UPDATE ORDERS SET STATUS = 'TU WPISAC' WHERE ID = " + id + "";
		sql = sql_string.c_str();


		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db);

}

void workerMenu() {
	while (true) {
		OrdersControlSystem oCSys;
		OrderCreationInterface oCInter;
		Messenger mess;
		
		std::string str;
		std::string status, order_id, messageID, message, receiver;

		std::cout << "Choose : show, show all (order(s)), (match) complited, (report) shortages, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "show all" || str == "all") {
			
			oCSys.showListOfOrdres();
		}
		if (str == "show") {
			
			std::cout << "Order's id : ";
			std::cin >> order_id;
			oCSys.showOrder(order_id);
		}
		if (str == "complited") {
			
			std::cout << "Order's id : ";
			std::cin >> receiver;
			std::cout << "Status : ";
			std::cin >> status;
			oCSys.changeStatus(order_id, status);
		}
		if (str == "shortages") {
			// TO DO
		}
		if (str == "read") {
			
			std::cout << "Massage's id : ";
			std::cin >> messageID;
			mess.readMessage(messageID);
		}
		if (str == "send") {
			
			std::cout << "Receiver's id : ";
			std::cin >> receiver;
			std::cout << "Massage : ";
			std::cin >> message;
			std::string ss = std::to_string(id);
			mess.sendMessage(message, receiver, ss);
		}
		if (str == "logout") {
			return;
		}
	}
}