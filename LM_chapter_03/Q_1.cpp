// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Jesse Ynag

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    float quantity;
    int quantityInt; // contains the amount of items purchased
    float itemPrice; // contains the price of each item
    float totalBill; // contains the total bill.
    string itemName;
    cout << setprecision(2) << fixed << showpoint; // formatted output

    cout << "Please enter the item name: ";
    getline(cin, itemName);

    cout << "Please input the number of items bought: ";

    // Fill in the input statement to bring in the quantity.
    cin >> quantity;
    quantityInt = static_cast<int>(round(quantity));

    // Fill in the prompt to ask for the price.
    cout << "Please enter the price: $";

    // Fill in the input statement to bring in the price of each item.
    cin >> itemPrice;

    // Fill in the assignment statement to determine the total bill.
    totalBill = round(itemPrice * quantity * 100) / 100;

    // Fill in the output statement to print total bill, with a label to the screen.
    cout << "The total price of " << quantityInt << " \"" << itemName << "\" is : $" << totalBill << endl;

    return 0;
}

/*
Exercise 1: Complete the program so that a sample run inputting 22 for the
number of items bought and 10.98 for the price of each item will produce
the results below.
Sample run of the program.
34 LESSON SET 3 Expressions, Input, Output and Data Type Conversions
Exercise 2: Once you have the program working, change the instruction:
cout << setprecision (2) << fixed << showpoint;
to
cout << setprecision(2) << showpoint;
Rerun the program with the same data given in Exercise 1 above and record
your results. What do you think the fixed attribute in the cout statement
does?
Exercise 3: Now put the fixed attribute back in and change the instruction to
make the precision 4. Rerun the program with the same data given in
Exercise 1 and record your results. What do you think the setprecision( )
attribute in the cout statement does?
The attribute showpoint forces all floating point output to show a decimal
point even if the values are whole numbers. In some environments this is
done automatically.
(optional)
Exercise 4: Add the following directive to the program: #include <string>
in the header. Alter the program so that the program first asks for
the name of the product (which can be read into a string object)
so that the following sample run of the program will appear.
Please input the name of the item
Milk
Please input the number of items bought
4
Please input the price of each item
1.97
The item that you bought is Milk
The total bill is $7.88
Now altar the program, if you have not already done so, so that
the name of an item could include a space within its string.
Please input the name of the item
Chocolate Ice Cream
Please input the number of items bought
4
Please input the price of each item
1.97
The item that you bought is Chocolate Ice Cream
The total bill is $7.88
*/