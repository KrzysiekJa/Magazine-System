#include "Messenger.h"
#include <string>
#include "Database.h"
#include <sqlite3.h>

int Database::callback(void* NotUsed, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

/*void Messenger::sendMessage(std::string message, std::string receiver, std::string sender) {
	if (checkConnection()) {
			sql_string = "INSERT INTO MESSENGER (NAME, SURNAME, PHONE, BIRTHDATE, PESEL) VALUES ('" + name + "', '" + surname + "', " + phone_number + ", " + birth_date + "," + pesel + "); ";

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
*/
std::string Messenger::checkMessages(std::string sender, std::string receiver) {
	
	//select from ..
	//if message in .. else..

}
