#include <iostream>
#include <fstream>

int main()
{
    std::ofstream output_file;
    output_file.open("output.txt");

    if(output_file)
    {
        for(size_t i = 1; i <= 10; i++)
        {
            output_file << i * i << '\n';
        }
    }
    else
    {
        std::cout << "File not found.\n";
        return -1;
    }
    output_file.close();

    return 0;
}