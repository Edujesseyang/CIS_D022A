#include <iostream>

bool is_prime(int num);

int main()
{
    std::cout << "Enter the number that you want to check if it is a prime number: \n";
    int num;
    std::cin >> num;
    bool result = is_prime(num);
    return 0;
}

bool is_prime(int num)
{
    int factor = 2;
    while(factor < num)
    {
        if(num%factor == 0)
        {
            std::cout << "It is not a prime number, it can divide " << factor << ".\n";
            return false;
        }
        if(factor == num -1)
        {
            std::cout << "It is a prime number.\n";
            return true;
        }
        factor++;
    }
}

