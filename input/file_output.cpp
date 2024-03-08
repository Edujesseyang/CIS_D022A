#include <iostream>
#include <fstream>

int main()
{
    int my_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(my_array) / sizeof(my_array[0]);

    std::ofstream output_file;
    output_file.open("output.txt");
    std::string title = "The output is: \n";
    if (output_file)
    {
        output_file << title;
        for (size_t i = 0; i < size; i++)
        {
            output_file << my_array[i] << "\n";
        }
    }

    return 0;
}