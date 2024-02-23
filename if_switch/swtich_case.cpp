#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a num: \n";
    std::cin >> num;
    std::cin.get();

    switch (num)
    {
    case 1:
        std::cout << "Yes, you are right!\n";
        break;
    case 23:
        std::cout << "that is a lot!\n";
        break;
    case 1255:
        std::cout << "TOO MUCH!!\n";
        break;
    default:
        std::cout << "I dont know about that.\n";
        break;
        }

    return 0;
}