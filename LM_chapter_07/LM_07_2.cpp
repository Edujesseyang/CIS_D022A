#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_GRADE = 25;                // maximum number of grades per student
const int MAX_CHAR = 30;                 // maximum characters used in a name
typedef char StringType30[MAX_CHAR + 1]; // character array data type for names
// having 30 characters or less.
typedef float GradeType[MAX_GRADE];               // one dimensional integer array data type
float findGradeAvg(GradeType, int grades_counts); // finds grade average by taking array of
// grades and number of grades as parameters
char findLetterGrade(float avg_grade); // finds letter grade from average given
// to it as a parameter
int main()
{
    StringType30 first_name, last_name; // two arrays of characters defined
    int numOfGrades;                    // holds the number of grades
    GradeType grades;                   // grades defined as a one dimensional array
    float average;                      // holds the average of a student's grade
    char moreInput;                     // determines if there is more input
    cout << setprecision(2) << fixed << showpoint;
    // Input the number of grades for each student
    cout << "Please input the number of grades each student will receive." << endl;
    cout << "This must be a number between 1 and " << MAX_GRADE << " inclusive" << endl;
    cin >> numOfGrades;

    while (numOfGrades > MAX_GRADE || numOfGrades < 1)
    {
        cout << "Please input the number of grades for each student." << endl
             << "This must be a number between 1 and " << MAX_GRADE
             << " inclusive\n";
        cin >> numOfGrades;
    }
    // Input names and grades for each student
    cout << "Please input a y if you want to input more students"
         << " any other character will stop the input" << endl;
    cin >> moreInput;
    while (moreInput == 'y' || moreInput == 'Y')
    {
        cout << "Please input the first name of the student" << endl;
        cin >> first_name;
        cout << "Please input the last name of the student" << endl;
        cin >> last_name;
        for (int count = 0; count < numOfGrades; count++)
        {
            cout << "Please input a grade:\n";
            // Fill in the input statement to place grade in the array
            cin >> grades[count];
        }

        float avg_grade = findGradeAvg(grades, numOfGrades);

        cout << first_name << " " << last_name;
        cout << "has an average grade is : " << avg_grade << '\n';

        // Fill in call to get and print letter grade of student to screen
        char letter_grade = findLetterGrade(avg_grade);
        cout << "This student will receive \"" << letter_grade << "\" for this course.\n";

        cout << "\n\n\n\n";
        cout << "Please input a y if you want to input more students"
             << " any other character will stop the input" << endl;
        cin >> moreInput;
    }
    return 0;
}

float findGradeAvg(GradeType array, int numGrades)
{
    float sum;
    for (size_t i = 0; i < numGrades; i++)
    {
        sum += array[i];
    }
    return sum / numGrades;
}

char findLetterGrade(float avg_grade)
{
    char letter;
    if (avg_grade <= 100 && avg_grade >= 90)
    {
        letter = 'A';
    }
    else if (avg_grade < 90 && avg_grade >= 80)
    {
        letter = 'B';
    }
    else if (avg_grade < 80 && avg_grade >= 70)
    {
        letter = 'C';
    }
    else if (avg_grade < 70 && avg_grade >= 60)
    {
        letter = 'D';
    }
    else if (avg_grade < 60 && avg_grade >= 0)
    {
        letter = 'F';
    }
    else
    {
        letter = ' ';
    }
    return letter;
}