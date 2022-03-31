#include <iostream>

int main(){
    int x = 0;
    int z = 1;
    
    const int y = 2;
    //y = x; error

    const int* ConstPtrX;
    ConstPtrX = &x;

    std::cout << "(x, z, *ConstPtrX) = (" << x << "," << z << "," << *ConstPtrX << ")" << std::endl;
    std::cout << "(&x, &z, ConstPtrX) = (" << &x << "," <<&z << "," << ConstPtrX << ")" << std::endl;
    ConstPtrX = &z;
    std::cout << "(x, z, *ConstPtrX) = (" << x << "," << z << "," << *ConstPtrX << ")" << std::endl;
    std::cout << "(&x, &z, ConstPtrX) = (" << &x << "," <<&z << "," << ConstPtrX << ")" << std::endl;
    x = 3;
    std::cout << "(x, z, *ConstPtrX) = (" << x << "," << z << "," << *ConstPtrX << ")" << std::endl;
    //*ConstPtrX = 4; error

    std::cout << std::endl;

    const int& ConstRefX = x;
    std::cout << "(x, z, ConstRefX) = (" << x << "," << z << "," << ConstRefX << ")" << std::endl;
    std::cout << "(&x, &z, &ConstRefX) = (" << &x << "," << &z << "," << &ConstPtrX << ")" << std::endl;
    //ConstRefX = &z; error
    //ConstRefX = 4;
    x = 4;
    std::cout << "(x, z, ConstRefX) = (" << x << "," << z << "," << ConstRefX << ")" << std::endl;
    std::cout << "(&x, &z, &ConstRefX) = (" << &x << "," << &z << "," << &ConstPtrX << ")" << std::endl;

    return 0;
}