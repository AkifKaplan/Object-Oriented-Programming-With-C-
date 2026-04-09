#ifndef BOOK_H
#define BOOK_H

#include "item.h"
#include <string>
using namespace std;

class Book:public Item{
private:
	int year;
	string author;
public:
	Book(int _id=0, string _name="noname", bool _available=true, int _year=0, string _author="noname");
	void print() const;
};

#endif

