#include <iostream>
#include <string>
#include "Person.h"

Person::Person(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid): 
			name(Nname), surname(Nsurmane), phone_number(Nphone_number), id(Nid){}

void Person::showData() {
	std::cout << "Name : "    << name << endl
		 	  << "Surname : " << surname << endl
			  << "Phone number : " << phone_number << endl
		      << "Id : " << id << endl;
}
