#ifndef MESSENGER_H
#define MESSENGER_H
#include <string>

class Messenger: public Database {


public:
	void sendMessage(std::string message, std::string receiver, std::string sender);

	std::string checkMessages(std::string sender, std::string receiver);
};

#endif
