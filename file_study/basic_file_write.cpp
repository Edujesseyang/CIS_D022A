#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream target_file; // set obi use out put file
    std::vector<std::string> data_vec = {"I", "dont", "know", "what", "I", "am", "doing", "!"};
    target_file.open("test.txt"); // file open

    // check if file is available
    if (target_file)
    {
        int vec_size = data_vec.size(); // set vec size

        // loop to out put data to the file 
        for (int i = 0; i < vec_size; i++)
        {
            target_file << data_vec[i] << " ";
        }

        target_file.close(); // close file after using
    }
    else
    {
        std::cout << "404 not found.\n";  // case handler if not file found
    }

    return 0;
}
