#include<iostream>

int main()
{
	char c = 2;
	std::cout << c << std::endl;
	std::cout << int(c) << std::endl;

	char c2 = 'a';
	std::cout << c2 << std::endl;
   
	unsigned char c3 = -2;
	std::cout << c3 << std::endl;
	std::cout << "-2 : " << int(c3) << std::endl;
	c3 = 0;
	std::cout << "0 : " << int(c3) << std::endl;
	c3 = -1;
	std::cout << "-1 : " << int(c3) << std::endl;
	c3 = 0.2;
	std::cout << "0.2 : " << int(c3) << std::endl;
	
	unsigned int i = 1;
	std::cout << i << std::endl;
	i = 0.8;
	std::cout << i << std::endl;
		
	return 0;
}

