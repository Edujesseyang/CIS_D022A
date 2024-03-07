// Name: Jesse Yang
// Program Output: 
// This prog will read data from a resource file, and make analysis, then write analysis report onto another file.

#include <iostream>
#include <fstream>
#include <vector>

std::vector<int> file_to_vector(std::string file_name);
int find_smallest_int(std::vector<int> vec);
int find_largest_int(std::vector<int> vec);
int find_total(std::vector<int> vec);
int find_avg(std::vector<int> vec);
void report_output(std::string file_name, int min, int max, int sum, int avg);

int main()
{
    // transfer all data into a vector.
    std::string const FILE_NAME = "number.txt"; 
    std::vector<int> data_vec = file_to_vector(FILE_NAME);
    int const SIZE = data_vec.size();

    // list all items 
    std::cout << "List Data:\n";
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << data_vec[i] << ' ';
    }
    std::cout << "\n\n";

    // call functions to get analysis result.
    int min = find_smallest_int(data_vec);
    int max = find_largest_int(data_vec);
    int sum = find_total(data_vec);
    int avg = find_avg(data_vec);

    // output analysis report to screen.
    std::cout << "Analysis Report:\n";
    std::cout << "The smallest number is: " << min << ".\n";
    std::cout << "The largest number is: " << max << ".\n";
    std::cout << "The total of all numbers is: " << sum << ".\n";
    std::cout << "The average value of all number is: " << avg << ".\n";

    // ouput analysis report to target file.
    std::string const REPORT_FILE = "output.txt"; 
    report_output(REPORT_FILE, min, max, sum, avg);

    return 0;
}

std::vector<int> file_to_vector(std::string file_name)
{
    std::ifstream file_in;
    file_in.open(file_name);
    int temp;
    std::vector<int> result;
    if (file_in)
    {
        while (file_in >> temp)
        {
            result.push_back(temp);
        }
    }
    else
    {
        std::cout << "File not found.\n";
    }
    file_in.close();
    return result;
}

int find_smallest_int(std::vector<int> vec)
{
    int size = vec.size();
    int smallest = vec[0];
    for (size_t i = 0; i < size; i++)
    {
        if (vec[i] < smallest)
        {
            smallest = vec[i];
        }
    }
    return smallest;
}

int find_largest_int(std::vector<int> vec)
{
    int size = vec.size();
    int largest = vec[0];
    for (size_t i = 0; i < size; i++)
    {
        if (vec[i] > largest)
        {
            largest = vec[i];
        }
    }
    return largest;
}

int find_total(std::vector<int> vec)
{
    int size = vec.size();
    int total = 0;
    for (size_t i = 0; i < size; i++)
    {
        total += vec[i];
    }
    return total;
}

int find_avg(std::vector<int> vec)
{
    int size = vec.size();
    int total = 0;
    for (size_t i = 0; i < size; i++)
    {
        total += vec[i];      
    }
    return total / size;
}

void report_output(std::string file_name, int min, int max, int sum, int avg)
{
    std::ofstream file_out;
    file_out.open(file_name);
    if(file_out)
    {
        file_out << "Analysis Report:\n";
        file_out << "The smallest number is: " << min << ".\n";
        file_out << "The largest number is: " << max << ".\n";
        file_out << "The total of all numbers is: " << sum << ".\n";
        file_out << "The average value of all number is: " << avg << ".\n";
    }
    else
    {
        std::cout << "File not found.\n";
    }
    file_out.close();
}