#include "Receipt.h"
#include <string>

void Receipt::create(std::string owner_id, std::string order_id, std::string data) {
    
    if (checkConnection()) {
        sql_string = "INSERT INTO RECEIPTS (OWNER_ID, ORDER_ID, DATA) VALUES (" + owner_id + ", " + order_id + ", '" + data + "'); ";

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
