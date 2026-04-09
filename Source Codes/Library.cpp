#include "Library.h"
#include <iostream>
using namespace std;

bool Library::add(Item *item){
	if(find(items.begin(),items.end(),item)==items.end()){
		items.push_back(item);
		return true;
	}
	else{
		return false;
	}
}

bool Library::add(Borrower *borrower){
	if(find(borrowers.begin(),borrowers.end(),borrower)==borrowers.end()){
		borrowers.push_back(borrower);
		return true;
	}
	else{
		return false;
	}
}

void Library::listBorrowers() const{
	for(int i=0; i<borrowers.size(); i++){
		borrowers[i]->print();
		cout<<endl;
		cout<<"Borrowed Items: "<<endl;
		borrowers[i]->listItems();
		cout<<endl;
	}
}

void Library::listItems() const{
	for(int i=0; i<items.size(); i++){
		items[i]->print();
		cout<<endl;
	}
}

Item* Library::findItem(int itemID){
	for(int i=0; i<items.size(); i++){
		if(items[i]->getID()==itemID){
			return items[i];
		}
	}
	return NULL;
}

Borrower* Library::findBorrower(string name){
	for(int i=0; i<borrowers.size(); i++){
		if(borrowers[i]->getName()==name){
			return  borrowers[i];
		}
	}
	return NULL;
}

bool Library::acceptBorrow(string borrowerName, int itemID){
	Item *item;
	Borrower *borrower;
	if(((item=findItem(itemID))!=NULL)&&((borrower=findBorrower(borrowerName))!=NULL)){
		if(item->isAvailable()){
			item->BorrowedBy(borrower);
			borrower->borrowItem(item);
			return true;
		}
	}
	return false;
}

Library::~Library(){
	for(int i=0; i<borrowers.size(); i++){
		delete borrowers[i];
	}
	for(int i=0; i<items.size(); i++){
		delete items[i];
	}
}
