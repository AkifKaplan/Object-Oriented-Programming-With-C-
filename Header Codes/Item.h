#ifndef ITEM_H
#define ITEM_H
#include <string>
#include "Borrower.h"
using namespace std;

class Borrower;

class Item{
private:
	int id;
	string name;
	bool available;
	Borrower *borrowedBy;
public:
	Item(int _id=0, string _name="noname", bool _available=true);
	virtual ~Item(void);
	virtual void print() const;
	int getID() const;
	bool isAvailable() const;
	void BorrowedBy(Borrower *borrower);
};

#endif