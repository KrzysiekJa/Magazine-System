#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {

public:
	string name;
	string surname;
	string phone_number;
	int    id;

	void showData();
};

#endif
