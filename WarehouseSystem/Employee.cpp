#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(int Nid): Person(Nid) {}

void Employee::personShowData() {
	showData();
	
	if(checkConnection()){ 
	
		sql = sql_string.c_str();

		sql_string = "SELECT PESEL, BIRTH_DAY FROM EMPLOYEE WHERE ID ="+ id +"";

		rc = sqlite3_exec(db, sql_string, callback, (void*)data, &zErrMsg);
		
		if( rc != SQLITE_OK ) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		} else {
			fprintf(stdout, "Operation done successfully\n");
		}
	}
	sqlite3_close(db);
}
