#pragma once

#include "Person.h"


class Employee : public Person{

protected:

	Employee(int n_id);

	void personShowData(std::string id);
};
