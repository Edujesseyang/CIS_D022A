#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file_in;
    file_in.open("int_test.txt");

    int sum = 0;
    int temp;
    int counter=0;
    if(file_in)
    {
        std::cout << "The sum of \"";
        while (file_in >> temp)
        {
            std::cout << temp << ' ';
            
            sum += temp;
            counter++;
        }
    }
    std::cout << " is: " << sum << ".\n";
    std::cout << "There are " << counter << " numbers in that file.\n";
    std::cout << "The avg of all number is " << sum / counter << ".\n";
    return 0;

}
