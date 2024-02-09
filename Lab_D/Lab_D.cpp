// LAB_D
// Name: Jesse Yang

// usage:
// This program prompts user to enter year and month values.
// then, print out information about how many days in that month of the year.

#include <iostream>

int calc_days(int year, int month);
int get_input();

int main()
{
    char readiness;
    std::cout << "Are you ready to check how many day in certain month? (y/n) \n";
    std::cin >> readiness;

    while (readiness == 'y' || readiness == 'Y')
    {

        std::cout << "\nPlease enter the year: \n";
        int year = get_input();

        std::cout << "\nPlease enter the month: \n";
        int month = get_input();

        if (month < 1 || month > 12)
        {
            std::cout << "\nPlease enter a valid month.\n";
        }
        else
        {

            int days = calc_days(year, month);

            std::cout << "\nThere are " << days << " days in " << month << '/' << year << ".\n";
        }

        std::cout << "\nDo you want to check another month? (y/n) \n";
        std::cin >> readiness;
    }

    if (readiness == 'n' || readiness == 'N')
    {
        std::cout << "\nThank you for using.\n";
    }

    return 0;
}

int get_input()
{
    int num;
    std::cin >> num;
    return num;
}

int calc_days(int year, int month)
{
    // inputs:    year<int>
    //            month<int>
    // output:    days<int>

    // this func checks inputs year and month,
    // and returns how many days in that month.

    bool is_leap;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            is_leap = true;
        }
        else
        {
            is_leap = false;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            is_leap = true;
        }
        else
        {
            is_leap = false;
        }
    }

    if (month == 2)
    {
        if (is_leap == true)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            return 31;
        }
        else
        {
            return 30;
        }
    }
}
