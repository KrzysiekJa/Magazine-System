#include "OrdersControlSystem.h"
#include "Database.h"

//zamieniam Order na void
//void OrdersControlSystem::saveToDB() {}
//void OrdersControlSystem::loadFromDB() {}

void OrdersControlSystem::getNewOrder() {

	if (checkConnection()) {
		sql_string = "SELECT ID, CLIENT_ID, STATUS FROM ORDERS WHERE STATUS = 'new'"; //tu mozna zmienic 
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

void OrdersControlSystem::showListOfOrdres() {

	if (checkConnection()) {
	sql_string = "SELECT ID, CLIENT_ID, STATUS FROM ORDERS";
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

void OrdersControlSystem::showOrder(std::string id) {
	if (checkConnection()) {

		sql_string = "SELECT ORDERS.CLIENT_ID, ORDERS.STATUS, PRODUCTS.NAME, PRODUCTS.AMOUNT FROM ORDERS INNER JOIN PRODUCTS ON ORDERS.ID, PRODUCTS.ORDER_ID WHERE ORDERS.ID =" + id + "";
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

void OrdersControlSystem::changeStatus(std::string id, std::string status) {

	if (checkConnection()) {
		sql_string = "UPDATE ORDERS SET STATUS = '" + status + "' WHERE ID = " + id + "";
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



void OrdersControlSystem::sendToDriver(std::string id, std::string status) {
	
	if (checkConnection()) {
		sql_string = "UPDATE PRODUCTS SET STATUS = '" + status + "' WHERE ID = " + id + "";
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
