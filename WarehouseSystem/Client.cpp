#include "Client.h"
#include <string>

Client::Client(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nzip_code, std::string Nadress) :
	Person(Nname, Nsurmane, Nphone_number, Nid), zip_code(Nzip_code), adress(Nadress) {
}
	
void Client::showReceipts(){ // to do
	
}