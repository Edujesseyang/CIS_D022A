#include <iostream>
#include <string>

int main()
{
    // The condition operator are "?" and ":",
    // These operators separated the statement to be 3 parts.
    // The first part is the condition statement.
    // The second part is execution statement if condition is true.
    // The last part is execution statement if condition is false.

    // ****************************************************************************
    // *    Formate : condition statement ? execution(true) : execution(false).   *
    // ****************************************************************************
    
    // example:
    int a = 10;
    int b = 20;

    // When we define a var, we can use this trick to set a condition before defined the var. 
    std::string result = (a == b) ? "True!" : "False!";
    std::cout << result << '\n';

    return 0;
}