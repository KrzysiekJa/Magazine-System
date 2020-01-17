#include <iostream>
#include <cstdlib>
#include <string>
#include "Database.h"





int main(void)
{
	while(true){
		std::string str;
		
		std::cout << "Choose one: create (new employee), login, exit" << std::endl;
		std::cin >> str;
		
		if(str == "create"){
			    // creation of profile;
		}
		if(str == "login"){
			    // log in function;
		}
		if(str == "exit"){
		    exit(0);
		}
	}
	
}
