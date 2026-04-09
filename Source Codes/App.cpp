#include "Item.h"
#include "Book.h"
#include "CD.h"
#include "Borrower.h"
#include "Library.h"
#include <iostream>
using namespace std;

int main(){

	Library *library=new Library();

	library->add(new Book(0, "The C++ Programming Language", true, 2013,"Bjarne Stroustrup"));
	library->add(new Book(1, "C++ Primer", true, 2012,"Stanley B. Lippman"));
	library->add(new CD(2, "Java, A Beginner's Guide", true, 1));
	library->add(new Book(3, "Java The Complete Reference", true, 2011,"Herbert Schildt"));
	library->add(new CD(4, "Effective Java", true, 2));

	library->add(new Borrower("Mert Ozkan","mozkan@gmail.com"));
	library->add(new Borrower("Kaan Bilgin","kbilgin@hotmail.com"));
	library->add(new Borrower("Ahmet Can","ahmet.can@ogu.edu.tr"));
	library->add(new Borrower("Cenk Kaptan","ckaptan@mail.com"));
	library->add(new Borrower("Cetin Yilmaz","cetyilmaz@ymail.com"));

	cout<<"------ Borrowers List ----------"<<endl;
	library->listBorrowers();
	cout<<"\n--------- Items List ------------"<<endl;
	library->listItems();

	library->acceptBorrow("Mert Ozkan",0);
	library->acceptBorrow("Mert Ozkan",3);
	
	library->acceptBorrow("Kaan Bilgin",1);
	
	library->acceptBorrow("Ahmet Can",2);
	library->acceptBorrow("Ahmet Can",4);

	//The following borrows will not be accepted.
	library->acceptBorrow("Cenk Kaptan",2);
	library->acceptBorrow("Cetin Yilmaz",4);

	cout<<"\n\n AFTER BORROWS \n\n";

	cout<<"------ Borrowers List ----------"<<endl;
	library->listBorrowers();
	cout<<"\n--------- Items List ------------"<<endl;
	library->listItems();

	return 0;
}


