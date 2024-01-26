#include <iostream>
#include <string>
using namespace std;

string get_user_input();
string mix_color(string color_1, string color_2);

int main()
{
    string color_1, color_2, result;

    cout << "First color: ";
    color_1 = get_user_input();
    cout << "Second color: ";
    color_2 = get_user_input();

    if ((color_1 == "red" || color_1 == "Red" || color_1 == "Yellow" || color_1 == "yellow" || color_1 == "Blue" || color_1 == "blue") && (color_2 == "red" || color_2 == "Red" || color_2 == "Yellow" || color_2 == "yellow" || color_2 == "Blue" || color_2 == "blue"))
    {
        result = mix_color(color_1, color_2);
        cout << "When you mix " << color_1 << " and " << color_2 << ", you get " << result << "." << endl;
    }
    else
    {
        cout << "Error! They can only be primary colors! " << endl;
    }

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

string mix_color(string color_1, string color_2)
{
    if (color_1 == "Red" || color_1 == "red")
    {
        if (color_2 == "Blue" || color_2 == "blue")
        {
            return "Purple";
        }
        else if (color_2 == "Yellow" || color_2 == "yellow")
        {
            return "Orange";
        }
        else
        {
            return "Red";
        }
    }
    else if (color_1 == "Blue" || color_1 == "blue")
    {
        if (color_2 == "Red" || color_2 == "red")
        {
            return "Purple";
        }
        else if (color_2 == "Yellow" || color_2 == "yellow")
        {
            return "Green";
        }
        else
        {
            return "Blue";
        }
    }
    else if (color_1 == "Yellow" || color_1 == "yellow")
    {
        if (color_2 == "Red" || color_2 == "red")
        {
            return "Orange";
        }
        else if (color_2 == "Blue" || color_2 == "blue")
        {
            return "Green";
        }
        else
        {
            return "Yellow";
        }
    }
}
