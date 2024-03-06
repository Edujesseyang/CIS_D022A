// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.
// Jesse Yang

#include <iostream>
using namespace std;
typedef int GradeType[100]; // declares a new data type:
// an integer array of 100 elements
float findAverage(const GradeType, int); // finds average of all grades
int findHighest(const GradeType, int);   // finds highest of all grades
int findLowest(const GradeType, int);    // finds lowest of all grades

int main()
{
    GradeType grades;   // the array holding the grades.
    int numberOfGrades; // the number of grades read.
    int pos;            // index to the array.
    float avgOfGrades;  // contains the average of the grades.
    int highestGrade;   // contains the highest grade.
    int lowestGrade;    // contains the lowest grade.

    // (Added by me), initialized all grade to be -1. to avoid if there is memory leaking.
    for (size_t i = 0; i < 100; i++)
    {
        grades[i] = -1;
    }

    // Read in the values into the array
    pos = 0;
    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
    cin >> grades[pos];
    while (grades[pos] != -99)
    {
        ++pos;
        cin >> grades[pos];        
    }

    //  count all valid value.
    int valid_value_count = 0;
    for (size_t i = 0; i < 100; i++)
    {
        if(grades[i] >= 0)
        {
            valid_value_count++;
        }
    }
    numberOfGrades = valid_value_count; // Fill blank with appropriate identifier
    
    avgOfGrades = findAverage(grades, numberOfGrades);
    cout << "The average of all the grades is " << avgOfGrades << endl;

    highestGrade = findHighest(grades, numberOfGrades);
    cout << "The highest grade is " << highestGrade << endl;

    lowestGrade = findLowest(grades, numberOfGrades);
    cout << "The lowest grade is " << lowestGrade << endl;

    return 0;
}

float findAverage(const GradeType array, int size)
{
    float sum = 0; // holds the sum of all the numbers
    for (int pos = 0; pos < size; pos++)
    {
        if (array[pos] > 0)   // (added by me). ignore the default values -1 and -99
        {
            sum = sum + array[pos];
        }
    }
    return (sum / size); // returns the average
}

int findHighest(const GradeType array, int size)
{
    int lowest = -9999;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] > 0) 
        {
            if (array[i] >= lowest)
            {
                lowest = array[i];
            }
        }
    }
    return lowest;
}

int findLowest(const GradeType array, int size)
{
    int highest = 99999;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            if (array[i] <= highest)
            {
                highest = array[i];
            }
        }
    }
    return highest;
}