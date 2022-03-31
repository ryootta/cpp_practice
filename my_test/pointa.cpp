#include <iostream>

bool check_ptr(int* a, int* b){
    if (a == b){
        std::cout << "check ptr is ";
        return true;
    }
    std::cout << &a << "," << &b << std::endl;
    return false;
}
int main(){
    int x = 0;

    int cope_x;   
    cope_x = x;
    cope_x =1;
    std::cout << "cope_x;" << cope_x << std::endl;
    std::cout << "x:" << x << std::endl;
    
    int* ptr_x;
    ptr_x = &x;
    *ptr_x = 2;
    std::cout << "*ptr_x;" << *ptr_x << std::endl;
    std::cout << "x:" << x << std::endl;
    //std::cout << "&x:" << &x << std::endl;
    //std::cout << "ptr_x:" << ptr_x << std::endl;
    std::cout << check_ptr(&x,ptr_x)<< std::endl;
    x = 3;
    std::cout << "*ptr_x;" << *ptr_x << std::endl;
    std::cout << "x:" << x << std::endl;
    int* q = &x;
    //std::cout << "&x:" << &x << std::endl;
    //std::cout << "q:" << q << std::endl;
    std::cout << check_ptr(&x,q)<< std::endl;


    int &ref_x = x;
    ref_x = 4;
    std::cout << "ref_x;" << ref_x << std::endl;
    std::cout << "x:" << x << std::endl;
    x = 5;
    std::cout << "ref_x;" << ref_x << std::endl;
    std::cout << "x:" << x << std::endl;
    

    return 0;
}