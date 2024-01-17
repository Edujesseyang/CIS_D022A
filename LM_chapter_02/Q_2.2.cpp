// This program will output the circumference and area
// of the circle with a given radius.
// Jesse Yang

#include <iostream>
using namespace std;
const double PI = 3.14;
const double RADIUS = 5.4;
int main()
{
    int area;                        // definition of area of circle
    int circumference;               // definition of circumference
    circumference = 2 * PI * RADIUS; // computes circumference
    area = RADIUS * RADIUS * PI;     // computes area

    cout << "With the circle with a radius of:  " << RADIUS << endl;
    cout << "The circumference of the circle is:\n " << circumference << "." << endl;
    cout << "The area of the circle is:\n " << area << "." << endl;

    cin.get();
    return 0;
}

// Exercise 3: After changing the type of those variables from float to int, the result will be:
//             The circumference of the circle is: 33
//             The area of the circle is: 91
//             Because the if a computation result is a floating number, but it stores in an int type variable,
//             it will automatic remove all digits after the floating point and storing the number as an integer.