#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string str1, str2, str3, str2_n, str4;
 
    char stopper;
    int len;

    cout << "Enter the context for string 1: " << endl;;
    getline(cin, str1);
    cout << "str1: entire line: " << endl;
    cout << str1 << endl;

    cout << "Enter the context for string 2: " << endl;;
    getline(cin, str2);
    cout << "Enter the length do you want: " << endl;;
    cin >> len;
    str2_n = str2.substr(0, len);
    cout << "str2: line with length of " << len << " : " << endl;
    cout << str2_n << endl;

    cout << "Enter the context for string 3: " << endl;;
    getline(cin, str3, 'a');

    // fucking important. clear the rest of input from the str3 after char 'a'.
    // to make sure the tail input wont mess up the following inputs.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');   
    // it got me so bad mother fucker.

    cout << "str3: everything before 'a': " << endl;
    cout << str3 << endl;

    cout << "Enter the char you want stop the storing to string 4: " << endl;
    cin >> stopper;
    cout << "Enter the context for string 4: " << endl;;
    getline(cin, str4, stopper);
    cout << "str4: everything before '" << stopper << "': " << endl;
    cout << str4 << endl;


    return 0;
}
