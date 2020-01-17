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
		
		if('create'){
			    // creation of profile;
		}
		if('login'){
			    // log in function;
		}
		if('exit'){
		    exit(0);
		}
	}
	
}
