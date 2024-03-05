// Name: Jesse Yang
// ****************************************************************************************************************
// *    program usage:                                                                                            *
// *            User will be asked choose one from scissor, rock, or paper.                                       *
// *            The computer will generate a random number to represent one of these choices.                     *
// *            Then, the program will display who is the winner, and ask if user wants to play again.            *
// ****************************************************************************************************************

#include <iostream>
#include <string>
#include <ctime>
#include <random>

std::string get_comp();
std::string get_user();
void display_winning(std::string comp, std::string user);

int main()
{
    std::cout << "Welcome to Rock Scissor Paper game,\nIn this game, you will play against the computer.\nAre you ready to play?(y/n)\n";
    char ready;

    while (ready != 'y' || ready != 'Y' || ready != 'n' || ready != 'N')
    {        
        std::cout << "Please enter correct character, 'y' for yes, 'n' for no to exit.\n";
        std::cin >> ready;
        std::cin.get();
        while (ready == 'y' || ready == 'Y')
        {
            std::string comp_choice = get_comp();
            std::string user_choice = get_user();
            display_winning(comp_choice, user_choice);
            std::cout << "Do you want play again?\n";
            std::cin >> ready;
        }
        if(ready == 'n'||ready == 'N')
        {
            break;
        }
    }
    std::cout << "Thank you for using.\n";
    std::cin.get();
    return 0;
}

std::string get_comp()
{
    srand(time(nullptr));
    int comp_num = rand() % 3;
    std::string result;
    if (comp_num == 0)
    {
        result = "rock";
    }
    else if (comp_num == 1)
    {
        result = "paper";
    }
    else
    {
        result = "scissors";
    }
    return result;
}

std::string get_user()
{
    int user_input = 0;
    while (user_input < 1 || user_input > 3)
    {
        std::cout << "Enter your choose, 1 for rock, 2 for paper, 3 for scissors:\n";
        std::cin >> user_input;
        std::cin.get();
    }
    if (user_input == 1)
    {
        return "rock";
    }
    else if (user_input == 2)
    {
        return "paper";
    }
    else
    {
        return "scissors";
    }
}

void display_winning(std::string comp, std::string user)
{
    std::string winner = "";
    if (comp == "rock")
    {
        if (user == "paper")
        {
            winner = "you";
        }
        else if (user == "scissors")
        {
            winner = "Computer";
        }
    }
    else if (comp == "paper")
    {
        if (user == "scissors")
        {
            winner = "you";
        }
        else if (user == "rock")
        {
            winner = "Computer";
        }
    }
    else if (comp == "scissors")
    {
        if (user == "rock")
        {
            winner = "you";
        }
        else if (user == "paper")
        {
            winner = "Computer";
        }
    }
    std::cout << "You had choose " << user << ".\n";
    std::cout << "Computer had choose " << comp << ".\n";
    if (winner != "")
    {
        std::cout << "The winner for this round is " << winner << ".\n";
    }
    else
    {
        std::cout << "This round is tie.\n";
    }
}