#include <iostream>
#include <string>
#include "Employee.h"
#include "Database.h"
#include <sqlite3.h>

Employee::Employee(int n_id) : Person(n_id) {}

void Employee::personShowData() {
	//showData(); - nie dziala, bledy
	 /* Brak polaczenia z metodami, zmiennymi z klasy Database
	if (checkConnection()) {

		sql = sql_string.c_str();

		sql_string = "SELECT PESEL, BIRTH_DAY FROM EMPLOYEE WHERE ID =" + id + "";

		rc = sqlite3_exec(db, sql_string, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db);
*/}
