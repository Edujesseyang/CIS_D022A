#include <iostream>
#include <ctime>
#include <random>

int get_user_input();
int get_rand_num();

int main()
{
    std::cout << "Welcome to Number Guessing Game, you will keep guessing a number between 1 - 10, if you use less than 3 times to get the correct number, you win.\n";
    char ready_check;
    std::cout << "Are you ready? (y/n)\n";
    std::cin >> ready_check;
    std::cin.get();

    while (ready_check == 'y' || ready_check == 'Y')
    {
        int guess_count = 1;
        int target_num = get_rand_num();
        int user_num = get_user_input();
        while (user_num)
        {
            if (user_num > target_num)
            {
                guess_count += 1;
                std::cout << "Too big!, You guessed " << guess_count << " times.\n";
                user_num = get_user_input();
            }
            else if (user_num < target_num)
            {
                guess_count += 1;
                std::cout << "Too small!, You guessed " << guess_count << " times.\n";
                user_num = get_user_input();
            }
            else
            {
                std::cout << "You are right! \n";
                std::cout << "You spent " << guess_count << " times to get the right number. \n";
                if (guess_count <= 3)
                {
                    std::cout << "Congrats! Winner!\n";
                }
                else
                {
                    std::cout << "But, you didn't win because you use to many times.\n";
                }
                break;
            }
        }
        std::cout << "Do you want to play again? (y/n)\n";
        std::cin >> ready_check;
        std::cin.get();
    }
    std::cout << "Thank you for using.\n";
    return 0;
}

int get_user_input()
{
    int input = 0;
    while (input <= 0 || input > 10)
    {
        std::cout << "Enter a number(between 1 - 10): ";
        std::cin >> input;
        std::cout << '\n';
        std::cin.get();
    }
    return input;
}

int get_rand_num()
{
    srand(time(nullptr));
    int rand_num = rand() % 10 + 1;
    return rand_num;
}
