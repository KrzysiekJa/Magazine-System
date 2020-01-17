#include "Database.h"
#include <iostream> 
#include <stdio.h>
#include <sqlite3.h> 
#include <string>

bool Database::checkConnection() {
    /*Checking connection function */

    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return false;
    }
    else {
		return true;
    }
}

int Database::callback(void* NotUsed, int argc, char** argv, char** azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

void Database::createTable() {
    /*Create new tables in database*/
    if(checkConnection()){

    /* Create SQL statement */
    sql = "CREATE TABLE EMPLOYERS("  \
        "ID INTEGER PRIMARY KEY     NOT NULL," \
        "NAME           TEXT    NOT NULL," \
        "SURNAME        TEXT    NOT NULL," \
		"PHONE			TEXT	NOT NULL," \
		"BIRTHDATE		DATE	NOT NULL"	\
        "PESEL          INTEGER     NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        fprintf(stdout, "Table created successfully\n");
    }
    sqlite3_close(db);
	}
}


void Database::addPersonToDB(std::string table_name, std::string name, std::string surname, std::string phone_number, std::string birth_date, std::string pesel) { 
	if (checkConnection()) {
		sql_string = "INSERT INTO "+table_name+" (NAME, SURNAME, PHONE, BIRTHDATE, PESEL) VALUES ('" + name + "', '" + surname + "', " + phone_number +", " + birth_date + "," + pesel + "); ";

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			std::cout << "Records created successfully\n";
		}
		sqlite3_close(db);
	}
}

void Database::addUserToDB(std::string login, std::string password) {
	if (checkConnection()) {
		sql_string = "INSERT INTO USERS (login, password) VALUES ('" + login + "', '" + password + "'); ";

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			std::cout << "Records created successfully\n";
		}
		sqlite3_close(db);
	}
}