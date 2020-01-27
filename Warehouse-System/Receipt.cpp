#include "Receipt.h"
#include <string>

void Receipt::create(std::string owner_id, std::string order_id, std::string data) {
    
        sql_string = "INSERT INTO RECEIPTS (OWNER_ID, ORDER_ID, DATA) VALUES (" + owner_id + ", " + order_id + ", '" + data + "'); ";
        executeQuery(sql_string);
}
