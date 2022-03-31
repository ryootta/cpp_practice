#include <iostream>

int main(){

	int x = 5;
	int* p;

	p = &x;

	std::cout << "x  = " << x << std::endl;  // xの値を出力
	std::cout << "&x = " << &x << std::endl; // xのアドレスを出力
//	std::cout << "*x = " << *x << std::endl; xの関節参照する値がないのでエラー
	std::cout << "p  = " << p << std::endl;  // xのアドレスを出力
	std::cout << "*p  = " << *p << std::endl;// xのアドレスを介して、xの値を出力
	std::cout << "&p = " << &p << std::endl; // pのポインタ

	return 0;
}

