#include <iostream>
#include <string>
using namespace std;

int get_user_input();
char get_char();
void print_solid(int width, int height, char chart);
void print_border(int width, int height, char chart);

int main()
{
    int width, height;

    cout << "Please enter the width: " << endl;
    width = get_user_input();
    cout << "Please enter the width: " << endl;
    height = get_user_input();
    cout << "What char you want to print with: " << endl;
    char chart = get_char();
    cout << endl;
    cout << endl;

    print_border(width, height, chart);

    cout << endl;
    cout << endl;

    print_solid(width, height, chart);

    cin.get();
    return 0;
}

int get_user_input()
{
    int inputs;
    cin >> inputs;
    cin.ignore();
    return inputs;
}

char get_char()
{
    char c;
    cin >> c;
    cin.ignore();
    return c;
}

void print_solid(int width, int height, char chart)
{
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            cout << chart;
        }
        cout << endl;
    }
}

void print_border(int width, int height, char chart)
{
    for (int i = 0; i <= width; i++)
    {
        cout << chart;
    }
    cout << endl;
    for (int j = 0; j <= height - 2; j++)
    {
        cout << chart;
        for (int k = 0; k <= width - 2; k++)
        {
            cout << " ";
        }
        cout << chart;
        cout << endl;
    }
    for (int i = 0; i <= width; i++)
    {
        cout << chart;
    }
    cout << endl;
}
