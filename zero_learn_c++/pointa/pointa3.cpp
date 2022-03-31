#include <iostream>

int main(){

	int x = 5;
	int* p;
	int& r = x;

	p = &x;

	std::cout << "x  = " << x << std::endl;  // xの値を出力
	std::cout << "&x = " << &x << std::endl; // xのアドレスを出力
//	std::cout << "*x = " << *x << std::endl; xの関節参照する値がないのでエラー
	std::cout << "p  = " << p << std::endl;  // xのアドレスを出力
	std::cout << "*p  = " << *p << std::endl;// xのアドレスを介して、xの値を出力
	std::cout << "&p = " << &p << std::endl; // pのポインタ

	std::cout << "r  = " << r << std::endl;  // xの値を出力
//	std::cout << "*r  = " << *r << std::endl;// xのアドレスを介して、xの値を出力
	std::cout << "&r = " << &r << std::endl;   
	return 0;
}

