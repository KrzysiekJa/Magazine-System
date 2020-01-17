#ifndef MESSAGE_H
#define MESSAGE_H
#include "Database.h"
#include <string>
class Message:Database {

private:
	std::string message;
	std::string receiver;
	int id;

public:
	void readMessage(std::string messageID);

	void deleteMessage(std::string messageID);
};

#endif
