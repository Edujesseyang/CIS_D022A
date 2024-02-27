#include <iostream>

int main()
{
    for (size_t i = 1; i <= 9; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            std::cout << i << " X " << j << " = " << i * j << "\t";
        }
        std::cout << '\n';
    }
    return 0;
}