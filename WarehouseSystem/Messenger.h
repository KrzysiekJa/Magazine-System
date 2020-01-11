#ifndef MESSENGER_H
#define MESSENGER_H

class Messenger {


public:
	void sendMessage(string message, string receiver, string sender);

	string checkMessages(string sender, string receiver);
};

#endif
