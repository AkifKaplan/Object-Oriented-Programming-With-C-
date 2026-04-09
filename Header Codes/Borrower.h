#ifndef BORROWER_H
#define BORROWER_H
#include <string>
#include <vector>
#include <algorithm>
#include "Item.h"
using namespace std;

class Item;

class Borrower{
private:
	string name;
	string email;
	vector<Item *> borrowItems;
public:
	Borrower(string n="noname", string em="noname@mail.com");
	string getName() const;
	void listItems() const;
	bool borrowItem(Item *item);
	void print();
};


#endif