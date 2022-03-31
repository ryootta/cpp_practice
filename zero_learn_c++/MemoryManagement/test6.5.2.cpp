#include <iostream>
#include <memory>

int main(){
	std::unique_ptr<int> x(new int(100));
	// std::unique_ptr<int> y=x; error

	std::cout << *x << std::endl;

	return 0;
}

