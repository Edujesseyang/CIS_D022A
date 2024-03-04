/*
Rock, Paper, Scissors Game
Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated. If the number is 1, then the computer has chosen rock. If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
2. The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. (You can use a menu if you prefer.)
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:
• If one player chooses rock and the other player chooses scissors, then rock wins.
(The rock smashes the scissors.)
• If one player chooses scissors and the other player chooses paper, then scissors
wins. (Scissors cuts paper.)
• If one player chooses paper and the other player chooses rock, then paper wins.
(Paper wraps rock.)
• If both players make the same choice, the game results in a tie.
*/

// Name: Jesse Yang
// program usage:
// Playing will be asked choose one from scissor, rock, or paper.
// The computer will choose also. The program will display who is the winner.

#include <iostream>
#include <string>
#include <ctime>
#include <random>

std::string get_comp();
std::string get_user();
std::string check_winner(string comp, string user);
// void display_winning(string winner);

int main()
{
    std::cout << "Welcome to Rock Scissor Paper game, "

    return 0;
}

std::string get_comp()
{
    srand(time(nullptr));
    int comp_num = rand() % 3;
    if (comp_num == 0)
    {
        return "rock";
    }
    else if (comp_num == 1)
    {
        return "paper";
    }
    else
    {
        return "scissors";
    }
}

std::string get_user()
{
    int user_input = 0;
    while (user_input < 1 || user_input > 3)
    {
        std::cout << "Enter your choose, 1 for rock, 2 for paper, 3 for scissors:\n";
        std::cin >> user_input;
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

std::string check_winner(string comp, string user)
{
    std::string winner = "";
    if (comp == "rock")
    {
        if (user = "paper")
        {
            winner = "User";
        }
        else if (user == "scissors")
        {
            winner = "Computer";
        }
    }
    else if (comp = "paper")
    {
        if (user == "scissors")
        {
            winner = "User";
        }
        else if (user = "rock")
        {
            winner = "Computer";
        }
    }
    else if (comp = "scissors")
    {
        if (user == "rock")
        {
            winner = "User";
        }
        else if(user == "paper")
        {
            winner = "Computer";
        }
    }
    return winner;
}
