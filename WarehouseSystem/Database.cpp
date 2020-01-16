#include "Database.h"
#include <iostream> 
#include <stdio.h>
#include <sqlite3.h> 
#include <string>

sqlite3* db;
char* zErrMsg = 0;
int rc;
std::string sql_string;
const char* sql;

void Database::checkConnection() {
    //tylko do sprawdzania polaczania

    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
    else {
        fprintf(stderr, "Opened database successfully\n");
    }
    sqlite3_close(db);
}

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int Database::createTable() {
    //uzyc tylko raz do tworzenia tabeli
    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }

    /* Create SQL statement */
    sql = "CREATE TABLE EMPLOYERS("  \
        "ID INTEGER PRIMARY KEY     NOT NULL," \
        "NAME           TEXT    NOT NULL," \
        "SURNAME        TEXT    NOT NULL," \
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


void Database::addEmployerToDB(std::string name, std::string surname, std::string pesel) { //uzupelnic atrybuty
    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }


    sql_string = "INSERT INTO EMPLOYERS (name,surname,pesel) VALUES ('" + name + "', '" + surname + "', " + pesel + "); ";

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


void Database::addClientToDB(std::string name, std::string surname, std::string pesel) { //uzupelnic atrybuty
    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }


    sql_string = "INSERT INTO CLIENTS (name,surname,pesel) VALUES ('" + name + "', '" + surname + "', " + pesel + "); ";

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

void Database::addUserToDB(std::string login, std::string password) { //uzupelnic atrybuty
    rc = sqlite3_open("warehouse.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
    else {
        fprintf(stdout, "Opened database successfully\n");
    }


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