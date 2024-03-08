#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // create a if obj. way 1.
    std::ifstream input_file("input.txt");

    // create a if obj way 2.
    std::ifstream input_file_2;
    input_file_2.open("input.txt");

    // cout all items --split by ' '.
    if(input_file_2)
    {
        std::string word;
        while(input_file_2 >> word)
        {
            std::cout << word << '\n';
        }
    }
    input_file_2.close();

    std::cout << "\n\n\n";

    // use getline()  -- split by '\n'
    input_file_2.open("input.txt");    
    if(input_file_2)
    {
        std::string line;
        while(getline(input_file_2, line))
        {
            std::cout << line << '\n';
        }
    }
    input_file_2.close();

    // use get();
    input_file_2.open("input.txt");
    char ch;
    if(input_file_2)
    {
        while(input_file_2.get(ch))
        {
            std::cout << '(' << ch << ')' << ' ';
        }           
    }
    input_file_2.close();

    return 0;
}