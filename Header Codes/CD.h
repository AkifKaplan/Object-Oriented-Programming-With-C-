#ifndef CD_H
#define CD_H
#include "item.h"
#include <string>
using namespace std;

class CD:public Item{
private:
	int number;
public:
	CD(int ID=0, string _name="noname", bool _available=true, int _number=0);
	void print() const;
};


#endif
