#include <iostream>

int main()
{
    char readiness;
    do
    {
        std::cout << "Are you ready?\n";
        std::cin >> readiness;
        switch (readiness)
        {
        case 'y':
            std::cout << "Okey, let's go ......\n";
            break;
        case 'n':
            std::cout << "Alright, bye!\n";
            break;
        default:
            std::cout << "I dont know what if that.\n";
            break;
        }
    } while (readiness == 'y');

    return 0;
}