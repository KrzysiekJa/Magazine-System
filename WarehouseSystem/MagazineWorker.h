#ifndef MAGAZINEWORKER_H
#define MAGAZINEWORKER_H
#include <string>

class MagazineWorker : Employee {
public:
	
	MagazineWorker(std::string Nname, std::string Nsurmane, std::string Nphone_number, int Nid, std::string Nbirth_date, int Npesel)

private:
	void deselectItem();

	string reportShortages();

	Order sendOdrerToDriver();
	// they rather to delete
};

#endif
