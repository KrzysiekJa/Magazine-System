#pragma once

#include "Person.h"
#include "Database.h"

class Employee : public Person, public virtual Database{

protected:

	Employee(int n_id);

	void personShowData(std::string id);
};
