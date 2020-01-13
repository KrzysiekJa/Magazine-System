#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {

public:
	std::string name;
	std::string surname;
	std::string phone_number;
	int    id;
	
	Person(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid);
	
	void showData();
};

#endif
