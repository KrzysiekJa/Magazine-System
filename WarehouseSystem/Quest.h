#ifndef QUEST_H
#define QUEST_H

#include "Order.h"
class Quest {

private:
	Order orders;

protected:
	bool completed();
};

#endif
