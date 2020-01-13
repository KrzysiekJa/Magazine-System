#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
class Message {

private:
	std::string message;
	std::string receiver;
	int id;

public:
	std::string readMessage(std::string message);

	std::string deleteMessage(std::string message);
};

#endif
