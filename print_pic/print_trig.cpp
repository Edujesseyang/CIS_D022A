#include <iostream>
using namespace std;

int get_user_input();
char get_char();
void print_solid_right_trig(int height, int base, char chart);
void print_solid_right_trig_2(int height, int base, char chart);
void print_prime_trig(int height, int base, char chart);
void print_border_trig(int height, int base, char chart);

int main()
{
    int base, height;
    cout << "Please enter the base: " << endl;
    base = get_user_input();
    cout << "Please enter the height: " << endl;
    height = get_user_input();
    cout << "Please enter the char: " << endl;
    char chart = get_char();

    cout << endl;
    cout << endl;

    print_solid_right_trig(height, base, chart);

    cout << endl;
    cout << endl;

    print_solid_right_trig_2(height, base, chart);

    cout << endl;
    cout << endl;

    print_prime_trig(height, base, chart);

    cin.get();
    return 0;
}

int get_user_input()
{
    int num;
    cin >> num;
    cin.ignore();
    return num;
}

char get_char()
{
    char chart;
    cin >> chart;
    cin.ignore();
    return chart;
}

void print_solid_right_trig(int height, int base, char chart)
{
    int counter = 0;
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= counter; j++)
        {
            cout << chart;
        }
        counter++;
        cout << endl;
    }
}

void print_solid_right_trig_2(int height, int base, char chart)
{
    int counter = base - 1;
    int row = 0;
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= counter; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j <= row; j++)
        {
            cout << chart;
        }
        counter--;
        row++;
        cout << endl;
    }
}

void print_prime_trig(int height, int base, char chart)
{
    int counter = 0;
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= base; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j <= counter; j++)
        {
            cout << chart;
        }
        for (int j = 0; j <= base; j++)
        {
            cout << ' ';
        }
        base--;
        counter += 2;
        cout << endl;
    }
}

void print_border_trig(int height, int base, char chart)
{
    int half = height;
}