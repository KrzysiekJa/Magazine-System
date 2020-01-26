#include <iostream>
#include <string>
#include "Employee.h"
#include "Database.h"
#include <sqlite3.h>

Employee::Employee(int n_id) : Person(n_id) {}

void Employee::personShowData(std::string id) {

		sql_string = "SELECT NAME, SURNAME, POSITION, PHONE_NUMBER, PESEL, BIRTH_DATE FROM EMPLOYERS WHERE ID =" + id + "";
		
		executeQuery(sql_string);
}
