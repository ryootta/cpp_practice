#include <iostream>

int main(){
	int* p1 = new int(100);
	int* p2 = new int[5];

	delete p1;
	delete[] p2;
	
	return 0;
}

