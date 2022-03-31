#include <iostream>
#include "counter.h"

using namespace std;

int main(){
	Counter c1, c2;
	c1.count();
	c2.count();
	c2.count();
	c2.reset();
	c1.count();
	c1.count();
	c2.count();

	cout << "c1 number : " << c1.getCount() << endl;
	cout << "c2 number : " << c2.getCount() << endl;
	cout << "total number : " << Counter::getAllCount() << endl;
	return 0;
}
