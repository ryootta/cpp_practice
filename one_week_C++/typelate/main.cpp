#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y) { return x + y; }

int main(){
	cout << "4+2=" << add<int>(4,2) << endl;
	cout << "ABC+EFG=" << add<string>("ABC","EFG") << endl;
	cout << "1+3=" << add(1,3) <<endl;
	return 0;
}
