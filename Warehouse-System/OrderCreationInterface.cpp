#include "OrderCreationInterface.h"
#include "Database.h"


void OrderCreationInterface::createOrder(std::string client_id, std::string status) {
	
    
        sql_string = "INSERT INTO ORDERS (CLIENT_ID, STATUS) VALUES (" + client_id + ", '" + status + "'); ";

        executeQuery(sql_string);
}

void OrderCreationInterface::addProduct(std::string name, std::string amount, std::string order_id, std::string status) {
	
    
        sql_string = "INSERT INTO PRODUCTS (NAME, AMOUNT, ORDER_ID, STATUS) VALUES ('" + name + "', " + amount + ", " + order_id + ", '" + status + "'); ";

        executeQuery(sql_string);
}

void OrderCreationInterface::addItem(std::string name, std::string amount) {

        sql_string = "INSERT INTO ITEMS (NAME, AMOUNT=) VALUES ('" + name + "', " + amount + "); ";

        executeQuery(sql_string);
}

void OrderCreationInterface::sendOrder(std::string id) {
	
   
        sql_string = "UPDATE ORDERS SET STATUS = ' in delivery' WHERE ID = " + id + "";
        executeQuery(sql_string);

}
