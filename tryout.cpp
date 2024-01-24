#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str4;
    char stopper;

    cout << "Enter the context for string 4: ";
    getline(cin, str4);
    cout << "Enter the char you want stop the storing to string 4: ";
    cin >> stopper;

    cout << "str4: everything before '" << stopper << "': " << endl;
    cout << str4 << endl;
    return 0;
}