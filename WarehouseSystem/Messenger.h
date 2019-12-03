#ifndef MESSENGER_H
#define MESSENGER_H

class Messenger {

private:
	int id;

public:
	void sendMessage(string message, string receiver);

	string checkMessages();
};

#endif
