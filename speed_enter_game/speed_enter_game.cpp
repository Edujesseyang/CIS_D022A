#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>

using namespace std;

long get_rand_num();
long get_user_input();
long long get_time_ms();

int main()
{
    char keep_play = 'y';
    while (keep_play == 'y' || keep_play == 'Y')
    {
        cout << "Game rule:" << endl;
        cout << "You have 5 sec to enter the target num." << endl;
        cout << "Are you ready? (y/n)";
        cin >> keep_play;
        if (keep_play == 'n' || keep_play == 'N')
        {
            break;
        }

        long target_num = pow(get_rand_num(), 2);
        cout << "The target number is: " << endl;
        cout << target_num << endl;
        cout << "You have 5 sec to enter the target num." << endl;

        cout << "Ready GO!" << endl;

        long long time_1 = get_time_ms();
        long user_input = get_user_input();
        long long time_2 = get_time_ms();
        float use_time = (static_cast<float>(time_2 - time_1)) / 1000;

        if (user_input == target_num)
        {
            cout << "Good job. " << endl;
            if (time_2 - time_1 >= 5000)
            {
                cout << "But you lose, because you are too slow, ";
            }
            cout << "You spend " << use_time << " s." << endl;
            if (time_2 - time_1 < 5000)
            {
                cout << "You are fast as fuck! " << endl;
                cout << endl;
            }
        }
        else
        {
            cout << "Yor entered a wrong number, You lose!" << endl;
            cout << endl;
        }
    }
    cout << endl;
    cin.get();
    return 0;
}

long get_rand_num()
{
    unsigned seed = static_cast<unsigned>(time(nullptr));
    srand(seed);
    return rand() % 100000000;
}

long get_user_input()
{
    int input_num;
    cout << "Enter:";
    cin >> input_num;
    cin.get();
    return input_num;
}

long long get_time_ms()
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
}
