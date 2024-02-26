#include <iostream>
#include <string>

int main()
{
    std::string my_arr[10];
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Enter a string: \n";
        std::cin >> my_arr[i];
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << my_arr[i] << ' ';
    }
    return 0;
}