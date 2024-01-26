#include <iostream>
#include <string>
using namespace std;

// Name: Jesse Yang
/*
    Input: (string) : A non-primary color;
    Output: (void) : Side effect: print a massage indicating two colors that are mixed to get the input color.
*/

string get_user_input();
void result_print(string color);

int main()
{
    result_print(get_user_input());

    cin.get();
    return 0;
}

string get_user_input()
{
    string color;
    cout << "Please enter a color: " << endl;
    cin >> color;
    cin.get();

    return color;
}

void result_print(string color)
{
    string color_1, color_2;
    if (color == "purple" || color == "Purple")
    {
        color_1 = "Red";
        color_2 = "Blue";
    }
    else if (color == "Orange" || color == "orange")
    {
        color_1 = "Red";
        color_2 = "Yellow";
    }
    else if (color == "Green" || color == "green")
    {
        color_1 = "Blue";
        color_2 = "Yellow";
    }
    else if (color == "red" || color == "Red" || color == "Yellow" || color == "yellow" || color == "Blue" || color == "blue")
    {
        cout << "Error! It cannot be a primary color! " << endl;
    }
    else
    {
        cout << "Cannot identify this color." << endl;
    }

    if (color_1 != "" && color_2 != "")
    {
        cout << "When you mix " << color_1 << " and " << color_2 << ", you get " << color << "." << endl;
    }
}