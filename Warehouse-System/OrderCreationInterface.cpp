#include "OrderCreationInterface.h"


void OrderCreationInteface::createOrder(std::string client_id, std::string status) {
	
    if (checkConnection()) {
        sql_string = "INSERT INTO ORDERS (CLIENT_ID, STATUS) VALUES (" + client_id + ", '" + status + "'); ";

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

void OrderCreationInteface::addProduct(std::string name, std::string amount, std::string order_id, std::string status) {
	
    if (checkConnection()) {
        sql_string = "INSERT INTO PRODUCTS (NAME, AMOUNT, ORDER_ID, STATUS) VALUES ('" + name + "', " + amount + ", " + order_id + ", '" + status + "'); ";

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

void OrderCreationInteface::addItem(std::string name, std::string amount) {

    if (checkConnection()) {
        sql_string = "INSERT INTO ITEMS (NAME, AMOUNT=) VALUES ('" + name + "', " + amount + "); ";

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

void OrderCreationInteface::sendOrder(std::string id) {
	
    if (checkConnection()) {
        sql_string = "UPDATE ORDERS SET STATUS = ' in delivery' WHERE ID = " + id + "";
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
