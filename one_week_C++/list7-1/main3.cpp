#include <iostream>
#include "overload.h"

using namespace std;

int main(){
	Calc *obj;
	obj = new Calc(1,2,3,4);
	cout << "1 + 2 = " << obj->add1() << endl;
	cout << "1 + 2 + 3 = " << obj->add2() << endl;
	cout << "1 + 2 + 3 + 4 = " << obj->add3() << endl;
       delete obj;
}       
