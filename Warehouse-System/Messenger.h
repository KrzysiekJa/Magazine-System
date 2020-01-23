#pragma once

#include <string>
#include "Database.h"

class Messenger : Database {


public:

	void sendMessage(std::string message, std::string receiver, std::string sender);

	void checkMessages(std::string sender, std::string receiver);

	void readMessage(std::string messageID);

	void deleteMessage(std::string messageID);
};
