#include <iostream>
#include "no_overload.h"

using namespace std;

int main(){
	Calc *obj;
	obj = new Calc();
	cout << "1 + 2 = " << obj->add1(1, 2) << endl;
	cout << "1 + 2 + 3 = " << obj->add2(1, 2, 3) << endl;
	cout << "1 + 2 + 3 + 4 = " << obj->add3(1, 2, 3, 4) << endl;
       delete obj;
}       
