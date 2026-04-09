#ifndef LIBRARY_H
#define LIBRARY_H

#include "item.h"
#include <string>
#include <vector>
using namespace std;

class Library{
private:
	vector<Item*> items;
	vector<Borrower*> borrowers;
public:
	bool add(Item *item);
	bool add(Borrower *borrower);
	void listBorrowers() const;
	void listItems() const;
	Item* findItem(int itemID);
	Borrower* findBorrower(string name);
	bool acceptBorrow(string borrowerName, int itemID);
	~Library();
};

#endif