#include "Borrower.h"
#include <iostream>
using namespace std;

Borrower::Borrower(string n, string em)
	:name(n),email(em){
}

string Borrower::getName() const{
	return name;
}

void Borrower::listItems() const{
	for(int i=0; i<borrowItems.size(); i++){
		borrowItems[i]->print();
		cout<<endl;
	}
}

bool Borrower::borrowItem(Item *item){
	if(find(borrowItems.begin(),borrowItems.end(),item)==borrowItems.end()){
		borrowItems.push_back(item);
		return true;
	}
	else
		return false;
}

void Borrower::print(){
	cout<<"Name:"<<name;
	cout<<", Email:"<<email;
	cout<<"Name:"<<name;
}
