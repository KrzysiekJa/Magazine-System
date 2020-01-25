#include <string>
#include <iostream>
#include "Driver.h"


Driver::Driver(int n_id) : Employee(n_id) {}


void Driver::deselectOrder() {
	// TODO - implement Driver::deselectOrder
	throw "Not yet implemented";
}

std::string Driver::getInformationClient(std::string client_id) {

	/*std::string zip_code, adress;

	std::string str = zip_code.append(", ");
	str.append(adress);

	return str;
	*/

	if (checkConnection()) {

		sql_string = "SELECT NAME, SURNAME, PHONE_NUMBER, PHONE_NUMBER, ZIP_CODE, ADDRESS FROM CLIENTS WHERE ID =" + client_id + "";
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