#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream test_file; 
    test_file.open("test.txt");
    std::vector<std::string> my_vec;

    // check if file is available.
    if (test_file)
    {
        std::string temp;   // set a temp var
        while (test_file >> temp)  // check if there is data can read and assign to the temp var
        {
            my_vec.push_back(temp); // push temp var to target vec
        }
        test_file.close(); // close file after using
    }
    else
    {
        std::cout << "File not found.\n"; // case handler for such not file can be found
    }

    int size = my_vec.size(); // init vec size
    for (int i = 0; i < size; i++) // print the vec. 
    {
        std::cout << my_vec[i] << '\n';
    }

    return 0;
}