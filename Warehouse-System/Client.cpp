#include "Client.h"
#include <string>

Client::Client(int n_id) : Person(n_id) {}

void Client::showReceipts(std::string id) { 

	if (checkConnection()) {

		sql_string = "SELECT ID, ORDER_ID FROM RECEIPTS WHERE OWNER_ID =" + id + "";
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