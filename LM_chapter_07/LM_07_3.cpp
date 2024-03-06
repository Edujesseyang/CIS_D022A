#include <iostream>
#include <iomanip>
using namespace std;
const int MAXROWS = 10;
const int MAXCOLS = 10;
typedef float PriceType[MAXROWS][MAXCOLS]; // creates a new data type
// of a 2D array of floats
void getPrices(PriceType table, int numOfRows, int numOfCols);   // gets the prices into the array
void printPrices(PriceType table, int numOfRows, int numOfCols, int year); // prints data as a table
int main()
{
    int rowsUsed; // holds the number of rows used
    int colsUsed;
    cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
    cin >> rowsUsed;
    cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
    cin >> colsUsed;                             // holds the number of columns used
    PriceType priceTable;                        // a 2D array holding the prices
    int year;
    cout << "Enter start year:\n";
    cin >> year;
    getPrices(priceTable, rowsUsed, colsUsed);   // calls getPrices to fill the array
    printPrices(priceTable, rowsUsed, colsUsed, year); // calls printPrices to display array
    return 0;
}

void getPrices(PriceType table, int numOfRows, int numOfCols)
{
    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 0; col < numOfCols; col++)
        // Fill in the code to read and store the next value in the array
        {
            cout << "Enter the values:\n";
            cin >> table[row][col];
        }
    }
}

void printPrices(PriceType table, int numOfRows, int numOfCols, int year)
{
    cout << "Year\t\t";
    int num = 1;
    while (num <= numOfCols)
    {
        cout << "Quarter " << num << "\t\t";
        num++;
    }
    cout << '\n';

    cout << fixed << showpoint << setprecision(2);
    for (int row = 0; row < numOfRows; row++)
    {
        cout << year++ << "\t\t";       
        for (int col = 0; col < numOfCols; col++)
        // Fill in the code to print the table
        {
            cout << table[row][col] << "\t\t\t";
        }
        cout << '\n';
    }
}