#include <iostream>

void print_ptr(int* a){
    std::cout << a << std::endl;
}
void change(int* a){
    *a += 1;
}

int main(){
    int x = 0;
    int* p = &x;
    std::cout << *p << std::endl;
    std::cout << &p << std::endl;
    std::cout << p << std::endl;
    print_ptr(p);
    print_ptr(&x);
    change(p);
    std::cout << *p << std::endl;
    std::cout << x << std::endl;
    change(&x);
    std::cout << *p << std::endl;
    std::cout << x << std::endl;

    
    return 0;
}