#include <iostream>
#include <string>
using namespace std;

string get_name()
{
    string name;
    cout << "enter your name: ";
    cin >> name;
    cin.get();
    return name;
}