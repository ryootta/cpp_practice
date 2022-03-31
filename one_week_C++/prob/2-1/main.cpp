#include <iostream>
#include "calc.h"

using namespace std;

int main(){
	Calc c;
	c.a = 4;
	c.b = 3;
	cout << c.a << "+" << c.b << "=" << c.add() << endl;
	cout << c.a << "-" << c.b << "=" << c.sub() << endl;
	return 0;
}
