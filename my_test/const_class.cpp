#include <iostream>

class Base{
    public:
        int add(int a, int b) const;
        int get_value();
        int value;
};

int Base::add(int a, int b) const{
    int c;
    c = a + b;
    return c;
}

int main(){
    Base Class;
    std::cout << Class.add(3,5) << std::endl;

    return 0;
}