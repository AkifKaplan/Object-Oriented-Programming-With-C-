#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(int _id, string _name, bool _available)
	:id(_id), name(_name), available(_available){
		borrowedBy=NULL;
}
void Item::print() const{
	cout<<"ID:"<<id<<", Name:"<<name;
	if(available){
		cout<<", available";
	}
	else{
		cout<<", borrowed by "<<borrowedBy->getName();
	}
}

int Item::getID() const{
	return id;
}

bool Item::isAvailable() const{
	return available;
}

void Item::BorrowedBy(Borrower *borrower){
	borrowedBy=borrower;
	available=false;
}

Item::~Item(void)
{
}
