#include <iostream>
#include <string>
#include "Person.h"

void Person::showData() {
	std::cout << "Name : "    << name << endl
		 	  << "Surname : " << surname << endl
			  << "Phone number : " << phone_number << endl
		      << "Id : " << id << endl;
}
