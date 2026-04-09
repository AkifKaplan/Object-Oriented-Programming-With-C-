#include "CD.h"
#include <iostream>
using namespace std;

CD::CD(int ID, string _name, bool _available, int _number)
	:Item(ID, _name, _available), number(_number){

}

void CD::print() const{
	Item::print();
	cout<<", Number:"<<number;
}
