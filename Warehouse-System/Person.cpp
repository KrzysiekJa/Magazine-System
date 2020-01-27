#include "Person.h"
#include "Database.h"
#include <stdio.h>
#include <stdlib.h>



Person::Person(int n_id) : id(n_id) {}

void Person::showData(std::string id)
{
	
		sql_string = "SELECT ID, NAME, SURNAME, PHONE_NUMBER FROM EMPLOYERS WHERE ID = " + id + "";
		executeQuery(sql_string);
}
