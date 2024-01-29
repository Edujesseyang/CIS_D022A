#include <iostream>
#include <string>
using namespace std;

int get_score();
char check_score(int score);
char plus_minor_checker(int score);

int main()
{
    int score = get_score();
    char grade = check_score(score);
    char plus_or_minor = plus_minor_checker(score);
    if (grade != 'N')
    {
        cout << "Your score is: " << score << endl;
        cout << "Your grade is :" << grade << plus_or_minor << endl;
    }
    else
    {
        cout << "Yor score is out of the range!" << endl;
    }
    return 0;
}

int get_score()
{
    int score;
    cout << "Enter you score: ";
    cin >> score;
    return score;
}

char check_score(int score)
{
    if (score >= 90 && score <= 100)
    {
        return 'A';
    }
    else if (score >= 80 && score < 90)
    {
        return 'B';
    }
    else if (score >= 70 && score < 80)
    {
        return 'C';
    }
    else if (score >= 60 && score < 70)
    {
        return 'D';
    }
    else if (score >= 0 && score < 60)
    {
        return 'F';
    }
    else
    {
        return 'N';
    }
}

char plus_minor_checker(int score)
{
    if (score < 60)
    {
        return '\0';
    }
    else if (score == 100)
    {
        return '+';
    }
    else if (score % 10 >= 8)
    {
        return '+';
    }
    else if (score % 10 <= 2)
    {
        return '-';
    }
    else
    {
        return '\0';
    }
}