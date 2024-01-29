#include <iostream>
using namespace std;
int main()
{
    char programmer, cPlusPlus;
    cout << "Before we consider your application, answer the following"
         << endl;
    cout << " yes ( enter Y ) or no ( enter N )" << endl;
    cout << "Are you a computer programmer?" << endl;
    cin >> programmer;
    if (programmer == 'Y')
    {
        cout << "Do you program in C++?" << endl;
        cin >> cPlusPlus;
        if (cPlusPlus == 'Y')
            cout << " You look like a promising candidate for employment"
                 << endl;
        else if (cPlusPlus == 'N')
            cout << " You need to learn C++ before further consideration"
                 << endl;
        else
            cout << " You must enter Y or N" << endl;
    }
    else if (programmer == 'N')
        cout << " You are not currently qualified for employment" << endl;
    else
        cout << " You must enter Y or N" << endl;
    return 0;
}