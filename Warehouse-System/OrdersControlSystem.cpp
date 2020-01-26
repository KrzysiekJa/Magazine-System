#include "OrdersControlSystem.h"
#include "Database.h"

void OrdersControlSystem::getNewOrder() {
	
		sql_string = "SELECT ID, CLIENT_ID, STATUS FROM ORDERS WHERE STATUS = 'new'"; //tu mozna zmienic 
		executeQuery(sql_string);
}

void OrdersControlSystem::showListOfOrdres() {

	
	sql_string = "SELECT ID, CLIENT_ID, STATUS FROM ORDERS";
	executeQuery(sql_string);

}

void OrdersControlSystem::showOrder(std::string id) {
	
		sql_string = "SELECT ORDERS.CLIENT_ID, ORDERS.STATUS, PRODUCTS.NAME, PRODUCTS.AMOUNT FROM ORDERS INNER JOIN PRODUCTS ON ORDERS.ID = PRODUCTS.ORDER_ID WHERE ORDERS.ID =" + id + "";
		executeQuery(sql_string);
}

void OrdersControlSystem::changeStatus(std::string id, std::string status) {

		sql_string = "UPDATE ORDERS SET STATUS = '" + status + "' WHERE ID = " + id + "";
		executeQuery(sql_string);

}

void OrdersControlSystem::sendToDriver(std::string id, std::string status) {
	
		sql_string = "UPDATE PRODUCTS SET STATUS = '" + status + "' WHERE ID = " + id + "";
		executeQuery(sql_string);

}
