#ifndef MESSAGE_H
#define MESSAGE_H

class Message {

private:
	string message;
	string receiver;
	int id;

public:
	string readMessage(string message);

	string deleteMessage(string message);
};

#endif
