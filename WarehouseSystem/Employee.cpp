#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			name(Nname), surname(Nsurmane), phone_number(Nphone_number), id(Nid), birth_date(Nbirth_date), pesel(Npesel) {}

void Employee::personShowData() {
	showData();
	std::cout << "Birth date : " << birth_date << endl
		 	  << "Pesel : " << pesel << endl;
}
