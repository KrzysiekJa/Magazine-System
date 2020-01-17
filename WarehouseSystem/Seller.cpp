#include <string>
#include "Seller.h"
#include "Order.h"
#include "Receipt.h"

Seller::Seller(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}

void Database::createTable() {
	/*Create new tables in database*/
	if (checkConnection()) {

		/* Create SQL statement */
		sql = "CREATE TABLE ORDERS("  \
			"ID INTEGER PRIMARY KEY     NOT NULL," \
			"PRODUCTNAME       TEXT    NOT NULL," \
			"PRODUCTAMOUNT     TEXT    NOT NULL);";

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

void Seller::createOrder(std::string product_name, std::string product_amount) {
	//przy dzidziczeniu wiecej niz jedna klasa nie dziala dziedziczenie database?
	if (checkConnection()) {
		sql_string = "INSERT INTO ORDERS (PRODUCTNAME, PRODUCTAMOUNT) VALUES ('" + product_name + "', " + product_amount + "");

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Records created successfully\n");
		}
		sqlite3_close(db);
	}
}

Receipt Seller::sendReceipt(std::string text) {
	// TODO - implement Saller::sendReceipt
	throw "Not yet implemented";
}

void menu(){
	while(true){
		std::string str;
		
		std::cout << "Choose : create, show all (order(s)), add (product), receipt, read, send (message), logout" << std::endl;
		std::cin >> str;
		
		
		if('create'){
				// TO DO
		}
		if('show all' || 'all'){
			    // TO DO
		}
		if('add'){
				// TO DO
		}
		if('receipt'){
			    // TO DO
		}
		if('read'){
			    // TO DO
		}
		if('send'){
			    // TO DO
		}
		if('logout'){
			return;
		}
	}
}