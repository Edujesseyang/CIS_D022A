#include <iostream>
using namespace std;

// Jesse Yang
// LM_Chapter 01
// ''' I comment problem 2, 3, and 4 to make first prog can run.'''
// ================================================================

// file name: firstprog.cpp
//  This is the first program that just writes out a simple message
int main()
{
    cout << "Now is the time for all good men" << endl;
    cout << "To come to the aid of their party" << endl;

    return 0;
}

// ================================================================

// file name: logicprob.cpp
// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
/*
int main()
{
    float firstNumber;
    float secondNumber;
    float tempNumber;
    // Prompt user to enter the first number.
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;
    // Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;
    // Echo print the input.
    cout << "You input the numbers as " << firstNumber
         << " and " << secondNumber << endl;
    // Now we will swap the values.
    tempNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tempNumber;
    // Output the values.
    cout << "After swapping, the values of the two numbers are "
         << firstNumber << " and " << secondNumber << endl;
    return 0;
}
*/
// ===================================================

// file name: runprob.cpp
//  This program will take a number and divide it by 2.
/*
int main()
{
    float number;
    int divider;

    divider = 2;

    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    cin >> number;

    number = number / divider;

    cout << "Half of your number is " << number << endl;
    // here you put "half of your number ... " I assume the divider should be 2.

    return 0;
}
*/

// ================================================

// file name: semiprob.cpp
//  This program demonstrates a compile error.
/*
int main()
{
    int number;
    float total;

    cout << "Today is a great day for Lab!" << endl;
    cout << "Let's start off by typing a number of your choice: ";
    cin >> number;

    total = number * 2;
    cout << total << " is twice the number you typed." << endl;

    return 0;
}
*/