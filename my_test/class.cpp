#include <iostream>

class Base{
    public:
        void add(int a, int b);
        int get_value();
        int value;
};

void Base::add(int a, int b){
    value = a + b;
}
int Base::get_value(){
    return value;
}

void value_print(Base c){
    c.add(3,5);
    std::cout << c.get_value() << std::endl;
    std::cout << &c << std::endl;
}

void ptr_print(Base *c){
    std::cout << c << std::endl;
}

void ref_print(Base &c){
    c.add(3,6); 
    std::cout << c.get_value() << std::endl;
}

int main(){

    // Error:
    // Base Obj();
    Base Obj;
    Obj.add(3,5);
    std::cout << Obj.get_value() << std::endl;
    std::cout << &Obj << std::endl;
    value_print(Obj);

    Base* PtrObj = &Obj;
    PtrObj->add(3,5);
    std::cout << PtrObj->get_value() << std::endl;
    std::cout << PtrObj << std::endl;
    ptr_print(PtrObj);

    std::cout << std::endl;
    Base* ptrObj;
    ptr_print(ptrObj);

    ref_print(Obj);

    return 0;
}