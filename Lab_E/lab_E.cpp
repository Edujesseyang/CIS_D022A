// Chapter 5 - Programming Challenge 2 - Characters for the ASCII codes
// Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. Display 16 characters on each line.
// Optional bonus:
// Define and call a function for the above.
// Jesse yang

#include <iostream>

void ascii_print();
int main()
{
    ascii_print();
    return 0;
}

void ascii_print()
{
    for (int i = 1; i <= 128; i++)
    {
        std::cout << static_cast<char>(i - 1) << ' ';
        if (i % 16 == 0)
        {
            std::cout << '\n';
        }
    }
}