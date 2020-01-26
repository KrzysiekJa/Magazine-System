#include <iostream>
#include <string>
#include <conio.h>


namespace functions
{
	std::string login()
	{	
		const char c_enter  = 13;
		const char c_backspace = 8;
		
		std::string password;
		char input_character;
 
		std::cout << "Password: ";
		input_character = getch();
 
		while(input_character != c_enter) {
 
			if(input_character == c_backspace && password.size()){
				
				std::cout << "\b \b";
				password.pop_back();
		    }
		    else if(input_character != c_backspace) {
				
		        std::cout.put('*');
		        password += input_character;
		    }
				input_character = getch();
		}
 
		return password;
	}
}
