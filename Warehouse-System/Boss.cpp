#include <iostream>
#include <string>
#include "Database.h"
#include "Boss.h"

Boss::Boss(int n_id) : Employee(n_id) {}

void bossMenu() {
	std::string str;

	while (true) {


		std::cout << "Choose : show, show all (order(s)), add (product), shortages, read, send (message), logout" << std::endl;
		std::cin >> str;


	}
	if (str == "show all" || str == "all") {
		// TO DO
	}
	if (str == "show") {
		// TO DO
	}
	if (str == "add") {
		// TO DO
	}
	if (str == "shortages") {
		// TO DO
	}
	if (str == "read") {
		// TO DO
	}
	if (str == "send") {
		// TO DO
	}
	if (str == "logout") {
		return;
	}
}
