#include "Person.h"
#include "Database.h"
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 



Person::Person(int n_id) : id(n_id) {}

void Person::showData(std::string id)
{
	if (checkConnection()) {

		sql_string = "SELECT NAME, SURNAME, PHONE_NUMBER FROM EMPLOYERS WHERE ID = " + id + "";
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
