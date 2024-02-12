/*
    This program will use binary search to look for an int from a vector<int>.
    The return value will be the index of that int.
    The program also has two other functions:
    1) Generate a certain sized vector<int> from starting int.
    2) Print out every int in the vector<int> in certain format.

*/

#include <iostream>
#include <vector>

int find_num_in_vector(std::vector<int> v, int num);
std::vector<int> get_vector(int start_num, int size);
void print_vec(std::vector<int>);

int main()
{
    std::vector<int> test1 = get_vector(1, 15);
    std::vector<int> test2 = get_vector(15, 45);
    std::vector<int> test3 = get_vector(12, 70);
    int find_num1 = 38;
    int find_num2 = 5;
    int find_num3 = 60;
    int index_1 = find_num_in_vector(test1, find_num1);
    int index_2 = find_num_in_vector(test2, find_num2);
    int index_3 = find_num_in_vector(test3, find_num3);
    int index_4 = find_num_in_vector(test3, find_num1);

    print_vec(test1);
    std::cout << "Find " << find_num1 << '\n';
    std::cout << "The index of " << find_num1 << " is: ";
    std::cout << index_1 << '\n';
    std::cout << '\n';

    print_vec(test2);
    std::cout << "Find " << find_num2 << '\n';
    std::cout << "The index of " << find_num2 << " is: ";
    std::cout << index_2 << '\n';
    std::cout << '\n';

    print_vec(test3);
    std::cout << "Find " << find_num3 << '\n';
    std::cout << "The index of " << find_num3 << " is: ";
    std::cout << index_3 << '\n';
    std::cout << "Find " << find_num1 << '\n';
    std::cout << "The index of " << find_num1 << " is: ";
    std::cout << index_4 << '\n';

    return 0;
}

int find_num_in_vector(std::vector<int> v, int num)
{
    // input: vector, target_num<int>
    // output: index<int>

    int start_i = -1;
    int end_i = v.size() - 1;
    int mid_i;
    while (start_i <= end_i)
    {
        mid_i = (start_i + end_i) / 2;
        if (v[mid_i] < num)
        {
            start_i = mid_i + 1;
        }
        else
        {
            end_i = mid_i - 1;
        }
    }
    if (start_i == v.size())
    {
        return -1;
    }
    else
    {
        return start_i;
    }
}

std::vector<int> get_vector(int start_num, int size)
{
    // input:  start_num<int>
    //         size<int>
    // output: vector<int>

    std::vector<int> num_vec;
    for (int i = start_num; i <= size; i++)
    {
        num_vec.push_back(i);
    }

    return num_vec;
}

void print_vec(std::vector<int> v)
{
    std::cout << '{';
    int length = v.size();
    for (int i = 0; i < length - 1; i++)
    {
        std::cout << v[i] << "(" << i << ")"
                  << ", ";
    }
    std::cout << v[length - 1] << "(" << length - 1 << ")";

    std::cout << "}\n";
}