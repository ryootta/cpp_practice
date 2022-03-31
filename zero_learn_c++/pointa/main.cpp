#include <iostream>

int main(){
	std::cout << "Hello, World" << std::endl;

	int x = 5;
	int* p = &x;
	int **pp = &p;
	int* null_p = nullptr;
	int y = *p;

	std::cout << "x  = " << x << std::endl;
	std::cout << "&x = " << &x << std::endl;
	std::cout << "p  = " << p << std::endl;
	std::cout << "*p = " << *p << std::endl;
	std::cout << "&p = " << &p << std::endl;
	std::cout << "pp = " << pp << std::endl;
	std::cout << "*pp = " << &pp << std::endl;
	std::cout << "nul_p  = " << null_p << std::endl;

	std::cout << "y  = " << y << std::endl;
	std::cout << "&y  = " << &y << std::endl;

	return 0;
}

