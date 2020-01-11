#include "Database.h"
#include <iostream> 
#include <sqlite3.h>
#include <string>

int checkConnection() {
    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open("warehouse.db", &DB);

    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
        return (-1);
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
    sqlite3_close(DB);
    return (0);
}

void addEmployerToDB(std::string name, std::string surname, int pesel) { //uzupelnic atrybuty
    //uzupelnic
}

void addClientToDB(std::string name, std::string surname, int pesel) { //uzupelnic atrybuty
    //uzupelnic
}


