#include <iostream>
#include <cstdlib>
#include "Database.h"





int main(void)
{
	while(true){
		std::string str;
		
		std::cout << "Choose one: create (new employee), login, exit" << std::endl;
		std::cin >> str;
		
		switch(str){
			
			case 'create':
			    // creation of profile;
				break;
			case 'login':
			    // log in function;
			    break;
			case 'exit':
			    exit(0);
			    break;
			default:
			   	break;
		}
	}
	
}
