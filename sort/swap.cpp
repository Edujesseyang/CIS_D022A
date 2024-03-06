#include <iostream>

void swap(int &a, int &b);
int main()
{
    int a = 12;
    int b = 54;
   
    std::cout << "Before: " << a << ", " << b << ".\n";
    swap(a, b);
    std::cout << "After: " << a << ", " << b << ".\n";

    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}