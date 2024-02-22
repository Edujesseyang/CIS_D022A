#include <iostream>

int main()
{
    // There are three ways manually type casting.

    int a = 10, b = 3;
    double result1 = a / b;
    std::cout << "Before:  10 / 3 = " << result1 << '\n';
    
    // 1. c style type casting
    std::cout << "C style: \nformat: (type)var\n";
    float result2 = (float)a / b;
    std::cout << "After:  10 / 3 = " << result2 << '\n';

    // 2. function style type casting.
    std::cout << "function style: \nformat: type(var)\n";
    double result3 = double(a) / b;
    std::cout << "After:  10 / 3 = " << result3 << '\n';

    // 3. static type casting.
    std::cout << "static casting: \nformat: static_cast<type>(var)\n";
    long double result4 = static_cast<long double>(a) / b;
    std::cout << "After:  10 / 3 = " << result4 << '\n';

    return 0;

}