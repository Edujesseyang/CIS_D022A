#include <iostream>
#include <ctime>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    char char_pool[10] = {'@', '#', '!', '$', '%', '^', '&', '*', 'O', 'X'};
    srand(time(nullptr));

    int width = rand() % 10;
    for (int i = 0; i <= 10 - width; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            cout << setw(width) << char_pool[width];
        }
        cout << endl;
    }

    return 0;
}