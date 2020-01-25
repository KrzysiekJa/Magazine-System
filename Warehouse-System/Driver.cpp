#include <string>
#include <iostream>
#include "Employee.h"
#include "OrdersControlSystem.h"
#include "Messenger.h"
#include "Driver.h"


Driver::Driver(int n_id) : Employee(n_id) {}


void Driver::deselectOrder(std::string id, std::string status) {
	if (db.checkConnection()) {
		db.sql_string = "UPDATE ORDERS SET STATUS = '" + status + "' WHERE ID = " + id + "";
		db.sql = db.sql_string.c_str();


		db.rc = sqlite3_exec(db.db, db.sql, callback, (void*)db.data, &db.zErrMsg);

		if (db.rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", db.zErrMsg);
			sqlite3_free(db.zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db.db);
}

std::string Driver::getInformationClient(std::string client_id) {

	/*std::string zip_code, adress;

	std::string str = zip_code.append(", ");
	str.append(adress);

	return str;
	*/

	if (db.checkConnection()) {

		db.sql_string = "SELECT NAME, SURNAME, PHONE_NUMBER, PHONE_NUMBER, ZIP_CODE, ADDRESS FROM CLIENTS WHERE ID =" + client_id + "";
		db.sql = db.sql_string.c_str();


		db.rc = sqlite3_exec(db.db, db.sql, callback, (void*)db.data, &db.zErrMsg);

		if (db.rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", db.zErrMsg);
			sqlite3_free(db.zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db.db);

}


void driverMenu() {
	while (true) {
		std::string str;

		std::cout << "Choose : show all (order(s)), show, deselect (order), (show) complited, read, send (message), logout" << std::endl;
		std::cin >> str;


		if (str == "show all" || str == "all") {
			// TO DO
		}
		if (str == "show") {
			// TO DO
		}
		if (str == "deselect") {
			// TO DO
		}
		if (str == "complited") {
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