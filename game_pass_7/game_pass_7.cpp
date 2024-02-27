#include <iostream>
#include <ctime>
#include <random>

int get_user_input();
int get_rand();
int main()
{
    std::cout << "Welcome to play Pass-number game.\n";
    std::cout << "You will select a integer number between 3, 7, and 9.\n";
    std::cout << "You and the computer need to count numbers one by one, starting from a random number.\n";
    std::cout << "If the number you need to count can be divided by selected number or has a the selected number in its ones place, you then need to enter 0 instead.\n";
    std::cout << "Computer will put a 'pass' in the front of the number if that case happened to it.\n";
    std::cout << "You lose if you miss counting.\n";

    char ready_check;
    std::cout << "Are you ready? (y/n)";
    std::cin >> ready_check;
    while (ready_check == 'y' || ready_check == 'Y')
    {
        int select_num = 0;
        while (!(select_num == 3 || select_num == 7 || select_num == 9))
        {
            std::cout << "select a number between 3, 7, and 9: ";
            std::cin >> select_num;
        }
        int start = get_rand();
        int user_count;
        for (size_t i = start; i <= 1000; i++)
        {
            if (start % select_num == 0 || start % 10 == select_num || start % 100 == select_num)
            {
                std::cout << "Pass(" << start << ")\n";
            }
            else
            {

                std::cout << start << '\n';
            }
            start += 2;
            user_count = get_user_input();
            if (((start - 1) % select_num == 0) || ((start - 1) % 10) == select_num || (start - 1) % 100 == select_num)
            {
                if (user_count != 0)
                {
                    std::cout << "You lose!\n";
                    break;
                }
            }
            else
            {
                if (user_count != (start - 1))
                {
                    std::cout << "You lose!\n";
                    break;
                }
            }
        }
        std::cout << "Do you want to play one more time? (y/n)";
        std::cin >> ready_check;
    }
    std::cout << "Thank you for using.\n";
    return 0;
}

int get_user_input()
{
    int input;
    std::cout << "Enter you number: ";
    std::cin >> input;
    std::cin.get();
    return input;
}
int get_rand()
{
    srand(time(nullptr));
    return rand() % 100 + 1;
}