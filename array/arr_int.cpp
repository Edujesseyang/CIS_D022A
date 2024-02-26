#include <iostream>

int main()
{
    int my_arr[10] = {};
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Enter a num: ";
        std::cin >> my_arr[i];
        std::cout << '\n';
    }
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << my_arr[i] << '\n';
    }
        return 0;
}