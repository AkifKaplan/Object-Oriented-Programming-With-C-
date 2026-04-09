#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(int _id, string _name, bool _available, int _year, string _author)
	:Item(_id, _name, _available), year(_year), author(_author){}


void Book::print() const{
	Item::print();
	cout<<", Year:"<<year<<", author:"<<author;
}

