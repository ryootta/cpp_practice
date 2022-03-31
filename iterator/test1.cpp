#include <iostream>
#include <vector>

int main(){
	std::vector<int> x = {0, 1, 2, 3, 4};
	
	auto it  = x.begin();
	std::cout << *it << std::endl;
	++it;
	std::cout << *it << std::endl;
	
	for ( it = x.begin(); it != x.end(); ++it){
		std::cout << *it << std::endl;
	}
		
	return 0;
}
