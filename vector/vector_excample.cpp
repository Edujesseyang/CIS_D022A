#include <iostream>
#include <vector> // include vector lib

void print_vec(std::vector<int> v);
std::vector<int> all_plus_1(std::vector<int> v);

int main()
{
    // way 1: define a vector with all default, use push_back or other to add items.
    std::vector<int> my_vec;
    my_vec.push_back(10);
    my_vec.push_back(20);
    my_vec.push_back(30);
    my_vec.push_back(40);

    // way 2:
    std::vector<int> my_vec2 = {1, 2, 3, 4};
    // or
    std::vector<int> my_vec3{1, 3, 4, 5};

    // way 3:
    std::vector<int> my_vec4(5); // create a vec with 5 items in it, all items are 0s.
    // or
    std::vector<int> my_vec5(5, 100); // create a vec with 5 items in it, they all == 100.

    print_vec(my_vec);
    print_vec(my_vec2);
    print_vec(my_vec3);
    print_vec(my_vec4);
    my_vec4 = all_plus_1(my_vec4);
    print_vec(my_vec4);
    print_vec(my_vec5);
    my_vec5 = all_plus_1(my_vec5);
    print_vec(my_vec5);

    return 0;
}

void print_vec(std::vector<int> v)
{
    int size = v.size();
    for (size_t i = 0; i < size; i++)
    {
        std::cout << v[i] << '\t';
    }
    std::cout << '\n';
}

// function can return a vector, not array.
std::vector<int> all_plus_1(std::vector<int> v)
{
    std::vector<int> result;
    for (int num : v)
    {
        result.push_back(++num);
    }
    return result;
}