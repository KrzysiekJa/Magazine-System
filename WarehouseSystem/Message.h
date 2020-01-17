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
	std::string readMessage(std::string messageID);

	std::string deleteMessage(std::string messageID);
};

#endif
