#include "Messenger.h"
#include <string>
#include <sqlite3.h>

void Database::createTable() {
	/*Create new tables in database*/
	if (checkConnection()) {

		/* Create SQL statement */
		sql = "CREATE TABLE MESSENGER("  \
			"ID INTEGER PRIMARY KEY     NOT NULL," \
			"RECEIVER       TEXT    NOT NULL," \
			"SENDER         TEXT    NOT NULL," \
			"MESSAGE        TEXT    NOT NULL);";

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

std::string Messenger::checkMessages(std::string sender, std::string receiver) {
	if (checkConnection()) {
		sql_string = "SELECT MESSAGE FROM MESSENGER WHERE SENDER='" + sender + "' AND '"+ receiver +"'";

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
