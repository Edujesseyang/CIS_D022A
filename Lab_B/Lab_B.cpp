// Jesse Yang - Lab_B --version 1

// This program will prompt user three times to get three one-word answers.
// Use those words to format a sentence for output

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // define 3 vars
    string name, liking, favorite;

    // prompt user the first question, store the input to name variable
    cout << "What is your name? " << endl;
    cout << "Enter: ";
    cin >> name;
    cin.ignore();

    // prompt user the question two, store the input to liking variable
    cout << "What is your liking?" << endl;
    cout << "Enter: ";
    cin >> liking;
    cin.ignore();

    // prompt user the question three, store the input to favorite variable
    cout << "What is your favorite subject? " << endl;
    cout << "Enter: ";
    cin >> favorite;
    cin.ignore();

    // user those variables to format a output context
    cout << "Hi, I am " << name << " and I like " << liking << ". My favorite subject is " << favorite << '.';

    cin.get();
    return 0;
}