#include <iostream>

template <typename T>
T Sum(T a, T b) {
    return a+b;
}
int main(){
    Sum<int>(1, 2);
    Sum<double>(1.2, 1.4);
}