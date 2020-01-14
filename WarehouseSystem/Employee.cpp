#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Person(Nname, Nsurmane, Nphone_number, Nid), birth_date(Nbirth_date), pesel(Npesel) {}

void Employee::personShowData() {
	showData();

	std::cout << "Birth date : " << birth_date << std::endl
		 	  << "Pesel : " << pesel << std::endl;

}
