#ifndef MAGAZINEWORKER_H
#define MAGAZINEWORKER_H

class MagazineWorker : Employee {


private:
	void deselectItem();

	string reportShortages();

	Order sendOdrerToDriver();

};

#endif
