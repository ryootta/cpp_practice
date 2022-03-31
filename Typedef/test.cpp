#include <iostream>

int Add (int x, int y){
    return x+y;
}

int main() {
    int (*AddPtr)(int, int) = Add;
    int result = AddPtr(3,5);
    std::cout << result << std::endl;

    return 0;
}