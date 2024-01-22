#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, liking, favorite;
    cout << "Enter your name, liking, favorite: ";
    cin >> name >> liking >> favorite;
    cout << "Hi, I am " << name << " and I like " << liking << ". My favorite subject is " << favorite << '.';
    return 0;
}