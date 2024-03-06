#include <iostream>
#include <fstream>
#include <vector>

void swap(int &a, int &b);

int main()
{
    std::ifstream file_in;
    std::ofstream file_out;
    file_in.open("int_test.txt");
    std::vector<int> data_vec;

    int temp;
    int count = 0;
    if (file_in)
    {
        while (file_in >> temp)
        {
            data_vec.push_back(temp);
            count++;
        }
    }
    file_in.close();
    std::cout << "File before: \n";
    for (size_t i = 0; i < count; i++)
    {
        std::cout << data_vec[i] << ' ';
    }
 
    for (size_t i = 0; i < count; i++)
    {
        
        for (size_t j = i + 1; j < count - 1; j++)
        {
            if(data_vec[i] > data_vec[j])
            {
                swap(data_vec[i], data_vec[j]);
                
            }
        }
    }

    std::cout << "\nFile after: \n";
    file_out.open("int_test.txt");
    std::cout << "\n\n\n";
    for (size_t i = 0; i < count; i++)
    {
        std::cout << data_vec[i] << ' ';
        file_out << data_vec[i] << ' ';
    }
    file_out.close();

    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}