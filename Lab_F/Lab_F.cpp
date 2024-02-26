#include <iostream>
#include <ctime>
#include <random>

int get_user_input();
int get_random();

int main()
{
    char ready_check;
    std::cout << "Welcome to play the number guessing game,\nYor have 5 chance to guess the correct number between 0 -100,\nGood lucky!!!Are you ready? (y/n)\n";
    std::cin >> ready_check;
    std::cin.get();
    
    while (ready_check == 'y' || ready_check == 'Y')
    {
        int guess_count = 7;
        int target_num = get_random();
        while (guess_count > 0)
        {
            int user_guess = get_user_input();
            guess_count--;
            if (user_guess == target_num)
            {
                std::cout << "You are right!! Winner winner chicken dinner!\n";
                break;
            }
            else if(target_num > user_guess)
            {
                std::cout << "It is too low, try a bigger number.\nYou have " << guess_count << " chance left.\n";
            }
            else if (target_num < user_guess)
            {
                std::cout << "It is too high, try a smaller number.\nYou have " << guess_count << " chance left.\n";
            }
            if(guess_count == 0)
            {
                std::cout << "SORRY. You loss the game!\n";
            }
        }
        std::cout << "Do you want to play one more time? (y/n)\n";
        std::cin >> ready_check;
    }
    std::cout << "Thank you for using.\nBye-Bye!\n";
    std::cin.get();
    return 0;
}

int get_user_input()
{
    int user_in;
    std::cout << "Enter a number between 1 - 100: \n";
    std::cin >> user_in;
    std::cin.get();
    return user_in;
}

int get_random()
{
    unsigned int seed = static_cast<int>(time(nullptr));
    srand(seed);
    int rand_num = rand() % 100 - 1;
    return rand_num;
}