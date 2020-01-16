#include "MagazineWorker.h"
#include <string>
#include "Order.h"


MagazineWorker::MagazineWorker(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel): 
			Employee(Nname, Nsurmane, Nphone_number, Nid, Nbirth_date, Npesel) {}


std::string MagazineWorker::reportShortages() {
	// TODO - implement MagazineWorker::reportShortages
	throw "Not yet implemented";
}

Order MagazineWorker::sendOdrerToDriver() {
	// TODO - implement MagazineWorker::sendOdrerToDriver
	throw "Not yet implemented";
}
