#include <iostream>
#include <string>
#include "MagazineWorker.h"


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
		std::string str;

		std::cout << "Choose : show, show all (order(s)), (match) complited, (report) shortages, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "show all" || str == "all") {
			// TO DO
		}
		if (str == "show") {
			// TO DO
		}
		if (str == "complited") {
			// TO DO
		}
		if (str == "shortages") {
			// TO DO
		}
		if (str == "read") {
			// TO DO
		}
		if (str == "send") {
			// TO DO
		}
		if (str == "logout") {
			return;
		}
	}
}