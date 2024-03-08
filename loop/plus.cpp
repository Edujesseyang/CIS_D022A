#include <iostream>

int main()
{
    // i++ and ++i in the () make not different.
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    for (size_t i = 0; i < 5; ++i)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    // cout i++ and ++i make different.
    for (size_t i = 0; i < 5;)
    {
        std::cout << i++ << ' ';
    }
    std::cout << '\n';
    for (size_t i = 0; i < 5;)
    {
        std::cout << ++i << ' ';
    }


}