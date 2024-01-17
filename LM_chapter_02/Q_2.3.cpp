// This program demonstrates the use of characters and strings
// Jesse Yang

#include <iostream>
using namespace std;
// Exercise : Using Lab 2.2 as an example, develop a program that will determine
// the area and perimeter of a rectangle. The length and width can be
// given as constants. (LENGTH=8 WIDTH=3)
const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
    int area, perimeter;
    area = LENGTH * WIDTH;
    perimeter = (LENGTH + WIDTH) * 2;

    cout << "For a rectangle with a length = 8; width = 2; \nThe area is " << area << endl;
    cout << "The perimeter is " << perimeter << endl;

    cin.get();
    return 0;
}
