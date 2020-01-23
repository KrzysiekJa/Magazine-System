#include "Messenger.h"
#include <string>
#include <sqlite3.h>


void Messenger::sendMessage(std::string message, std::string receiver, std::string sender) {
	if (checkConnection()) {
		sql_string = "INSERT INTO MESSENGER (RECEIVER, SENDER, MESSAGE) VALUES ('" + receiver + "', '" + sender + "', " + message + "); ";

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

void Messenger::checkMessages(std::string sender, std::string receiver) {
	if (checkConnection()) {
		sql_string = "SELECT ID, MESSAGE FROM MESSENGER WHERE SENDER='" + sender + "' AND '" + receiver + "'";

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

void Messenger::readMessage(std::string messageID) {
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

void Messenger::deleteMessage(std::string messageID) {
	if (checkConnection()) {

		/* Create merged SQL statement */
		sql_string = "DELETE from MESSENGER where ID=" + messageID + ";";
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