// This program tests whether or not an initialized value
// is equal to a value input by the user
// PLACE YOUR NAME HERE
#include <iostream>
using namespace std;
int main()
{
    int num1;     // num1 is not initialized
    int num2 = 5; // num2 has been initialized to 5
    cout << "Please enter an integer" << endl;
    cin >> num1;
    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
    if (num1 == num2)
        cout << "The values are the same." << endl;
    if (num1 != num2)
        cout << "The values are not the same" << endl;
    return 0;
}

// Exercise 1: Run the program several times using a different input each time.
// Does the program do what you expect? Is so, explain what it is doing. If
// not, locate the error and fix it.
// Exercise 2: Modify the program so that the user inputs both values to be
// tested for equality. Make sure you have a prompt for each input. Test the
// program with pairs of values that are the same and that are dif ferent.
// Exercise 3: Modify the program so that when the numbers are the same it
// prints the following lines:
// The values are the same.
// Hey that’s a coincidence!
// Exercise 4: Modify the revised Exercise 3 program by replacing the two if
// statements with a single if/else statement. Run the program again to test
// the results