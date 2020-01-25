#include <iostream>
#include <string>
#include "Employee.h"
#include "Database.h"
#include <sqlite3.h>

Employee::Employee(int n_id) : Person(n_id) {}

void Employee::personShowData(std::string id) {

	if (checkConnection()) {

		sql_string = "SELECT NAME, SURNAME, POSITION, PHONE_NUMBER, PESEL, BIRTH_DATE FROM EMPLOYERS WHERE ID =" + id + "";
		
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
