#include "Database.h"
#include <iostream> 
#include <sqlite3.h>
#include <string>

int rc;
char* sql;
sqlite3* db;
char* zErrMsg = 0;
int exit = 0;

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}


int checkConnection() {
    
    exit = sqlite3_open("warehouse.db", &db);

    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(db) << std::endl;
        return (-1);
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
    sqlite3_close(db);
    return (0);
}

void addEmployerToDB(char* name, char* surname, char* pesel) { //uzupelnic atrybuty
    
    char* a = strcpy(sql, name); //test
    sql << "INSERT INTO COMPANY (id,name,surname,pesel) "  \
        "VALUES (1, '" << name << "', '" << surname << "', '" << pesel << "'); ";

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else {
        std::cout << "Records created successfully\n");
    }
    sqlite3_close(db);
}

void addClientToDB(std::string name, std::string surname, int pesel) { //uzupelnic atrybuty
    //uzupelnic
}

void 

