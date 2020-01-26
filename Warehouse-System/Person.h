#pragma once
#include <string>
#include "Database.h"

class Person: public virtual Database{

public:
	int id;

	Person(int n_id);

	void showData(std::string id);
};