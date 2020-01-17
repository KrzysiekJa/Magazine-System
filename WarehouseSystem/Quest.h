#ifndef QUEST_H
#define QUEST_H
#include "ClientInformatio.h"
#include "Order.h"
class Quest {

private:
	Order orders;
	ClientInformatio information;

protected:
	bool completed();
};

#endif
