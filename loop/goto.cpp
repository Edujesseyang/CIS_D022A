#include <iostream>

int main()
{
    // Here we can separate the program to different parts, name them, and use goto key word to jump back and froth to manipulate the way of the program running.

part_1:
    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << "I'm doing something here. '\n'";
    }

part_2:
    char again;
    std::cout << "Do you want to do it again? (y/n)\n";
    std::cin >> again;
    std::cin.get();

    if (again == 'y' || again == 'Y')
    {
        goto part_1;
    }
    else if (again == 'N' || again == 'n')
    {
        goto part_3;
    }
    else
    {
        std::cout << "Please enter the correct char!\n";
        goto part_2;
    }

part_3:
    std::cout << "Thank you for using!\n";

    return 0;
}