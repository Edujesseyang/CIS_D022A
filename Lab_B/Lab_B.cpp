#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, liking, favorite;
    cout << "What is your name? " << endl;
    cout << "Enter: ";
    cin >> name;
    cin.ignore();

    cout << "What is your liking?" << endl;
    cout << "Enter: ";
    cin >> liking;
    cin.ignore();

    cout << "What is your favorite subject? " << endl;
    cout << "Enter: ";
    cin >> favorite;
    cin.ignore();

    cout << "Hi, I am " << name << " and I like " << liking << ". My favorite subject is " << favorite << '.';

    cin.get();
    return 0;
}