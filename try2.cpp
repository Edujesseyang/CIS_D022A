#include <iostream>

int main() {
    const int a = 15;  // Here, var is const.
    const int *ptr_a = &a;  // ptr is pointing a const, but the ptr is not a const.
    
    int b = 12;  // Here, var is not a const.
    int const *ptr_b = &b;  // But, ptr is a const, pointing a non-const var.
    

    std::cout << ptr_a << '\n';
    std::cout << *ptr_a << '\n';

    std::cout << ptr_b << '\n';
    std::cout << *ptr_b << '\n';




    return 0;
}
