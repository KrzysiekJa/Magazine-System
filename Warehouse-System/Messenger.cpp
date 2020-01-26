#include "Messenger.h"
#include <string>
#include <sqlite3.h>


void Messenger::sendMessage(std::string message, std::string receiver, std::string sender) {
	
		sql_string = "INSERT INTO MESSENGER (RECEIVER, SENDER, MESSAGE) VALUES ('" + receiver + "', '" + sender + "', " + message + "); ";

		executeQuery(sql_string);
}

void Messenger::checkMessages(std::string sender, std::string receiver) {
	
		sql_string = "SELECT ID, MESSAGE FROM MESSENGER WHERE SENDER='" + sender + "' AND '" + receiver + "'";
		executeQuery(sql_string);

}

void Messenger::readMessage(std::string messageID) {
	
		sql_string = "SELECT MESSAGE FROM MESSENGER WHERE ID=" + messageID + ";";
		executeQuery(sql_string);
}

void Messenger::deleteMessage(std::string messageID) {
	
		sql_string = "DELETE from MESSENGER where ID=" + messageID + ";";
		executeQuery(sql_string);
	
}