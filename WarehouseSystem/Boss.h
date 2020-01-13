#ifndef BOSS_H
#define BOSS_H
#include <string>
#include "Employee.h"


class Boss : Employee {

public:
	Boss(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel);
};

#endif
