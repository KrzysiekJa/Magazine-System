#include "Message.h"
#include <string>

 void Message::readMessage(std::string messageID) {
	if (checkConnection()) {
		sql_string = "SELECT MESSAGE FROM MESSENGER WHERE ID=" + messageID + ";";

		sql = sql_string.c_str();

		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
		sqlite3_close(db);
	}
}

void Message::deleteMessage(std::string messageID) {
	if (checkConnection()) {

		/* Create merged SQL statement */
		sql_string = "DELETE from MESSENGER where ID="+ messageID + ";";
		sql = sql_string.c_str();

		/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n"); \
		}
		sqlite3_close(db);
	}
}
