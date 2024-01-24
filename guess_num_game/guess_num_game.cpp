#include <iostream>
#include <cstdint>
#include <ctime>
using namespace std;

int get_input();
int make_rand();

int main()
{
    int user_input = get_input();
    int target_num = make_rand();
    int guess_time = 5;

    while (guess_time >= 0)
    {

        if (user_input > target_num)
        {
            cout << "Wrong number!";
            cout << "It is too big." << endl;
            user_input = get_input();
        }
        else if (user_input < target_num)
        {
            cout << "Wrong number!";
            cout << "It is too small. " << endl;
            user_input = get_input();
        }
        if (user_input == target_num)
        {
            cout << "You win, " << target_num << " is the right answer!" << endl;
            break;
        }

        cout << "You have " << guess_time << " tries." << endl;
        guess_time -= 1;
    }

    if (guess_time <= 0)
    {
        cout << "You lose the game!" << endl;
        cout << "The right answer is: " << target_num << endl;
    }

    cin.get();
    return 0;
}

int get_input()
{
    int num;
    cout << "Guess a number between 0 to 100: ";
    cin >> num;
    cin.get();
    return num;
}

int make_rand()
{
    int64_t seed = static_cast<int64_t>(time(nullptr));
    srand(seed);
    return rand() % 100;
}