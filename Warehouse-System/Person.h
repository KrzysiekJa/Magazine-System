#pragma once
#include <string>
class Person : Database{

public:
	int id;

	Person(int n_id);

	void showData(std::string id);
};