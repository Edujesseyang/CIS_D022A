// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.
// Jesse Yang

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b; // the smaller two sides of the triangle
    float hyp;  // the hypotenuse calculated by the program
    cout << "Please input the value of the two sides: ";
    cin >> a >> b;

    // Fill in the assignment statement that determines the hypotenuse
    hyp = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The sides of the right triangle are " << a << " and " << b << endl;
    cout << "The hypotenuse is: " << hyp << endl;

    return 0;
}

/*
The formula for finding the hypotenuse is hyp = a2 + b2.
How can this be implemented in C++? Hint: You will use two pre-defined
math functions (one of them twice) learned in this lesson. One of them
will be “inside” the other.
Exercise 1: Fill in the missing statement so that the following sample run is
implemented:
Exercise 2: Alter the program so that the sample run now looks like the
following:
Note: This is not a trivial change. You must include another directive as
well as use the formatted features discussed in the earlier labs of this
lesson. Notice that the change is made only to the value of the hypotenuse
and not to the values of 9 and 3.
*/