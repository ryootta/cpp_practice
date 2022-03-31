#include <iostream> 
#include <string>
#include "Sample.h"

using namespace std;

int main(){
	Const c;
	cout << "const:" << c.cst << endl;
	c.setStr("ABC");
	cout << c.getStr() << endl;
	return 0;
}

