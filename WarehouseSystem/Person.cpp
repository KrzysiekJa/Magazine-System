#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include "Database.h"
#include "Person.h"

Person::Person(int n_id): id(n_id){}

void Person::showData()
{	
	if(checkConnection()){ 
	
		sql = sql_string.c_str();

		sql_string = "SELECT NAME, SURNAME, PHONE_NUMBER FROM EMPLOYEE WHERE ID ="+ id +"";

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
