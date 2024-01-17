// This program demonstrates the use of characters and strings
// Jesse Yang

#include <iostream>
#include <string>
using namespace std;
// Main Exercise:
const string FAVORITESODA = "Dr. Dolittle"; // use double quotes for strings
const char BESTRATING = 'A';                // use single quotes for characters
int main()
{

    char rating;          // 2nd highest product rating
    string favoriteSnack; // most preferred snack
    int numberOfPeople;   // the number of people in the survey
    int topChoiceTotal;   // the number of people who prefer the top choice
    // Fill in the code to do the following:
    // Assign the value of "crackers" to favoriteSnack
    favoriteSnack = "crackers";
    // Assign a grade of 'B' to rating
    rating = 'B';
    // Assign the number 250 to the numberOfPeople
    numberOfPeople = 250;
    // Assign the number 148 to the topChoiceTotal
    topChoiceTotal = 148;
    // Fill in the blanks of the following:
    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating << endl;

    cin.get();
    return 0;
}

// Exercise 2: run test passed.
// Exercise 3:
//   Answer: It is not possible to change the variable FAVORITESODA by adding code within the main function module.
//           Because this variable is defined in as a global constant variable at the out side of the main function.
//           It can not be change by adding code in the main function.
// Exercise 4:
//   Answer: It is possible to change the variable favoriteSnack by adding code in the the main function module.
//           Because it is a local str variable that defined in side the main function.
//           It can be change by re-define the value of this variable in the following lines.