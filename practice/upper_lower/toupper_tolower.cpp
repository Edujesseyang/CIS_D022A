#include <iostream>
#include <string>
using namespace std;

string get_input();
string tolower(string str);
string toupper(string str);

int main()
{
    string target_str = get_input();

    cout << "Upper: " << toupper(target_str) << endl;
    cout << "Lower: " << tolower(target_str) << endl;
    return 0;
}

string get_input()
{
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    return str;
}

string tolower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    return str;
}

string toupper(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    return str;
}
