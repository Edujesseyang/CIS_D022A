#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file_in;
    int counter = 0;

    file_in.open("test.txt");
    std::string item;
    if(file_in)
    {
        while(file_in >> item)
        {
            std::cout << item << '\n';
            counter++;
        }
    }
    std::cout << "There are " << counter << " items in that file.\n";

    return 0;
}