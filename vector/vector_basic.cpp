#include <iostream>
#include <vector>
#include <string>

int
main(int argc, char *argv[])
{
    // The way to define a vec
    std::vector<int> my_vec;

    // Use loop to add items to the vec
    for (int i = 0; i <= 5; i++)
    {
        my_vec.push_back(i);
    }

    // Use loop to interact with items in the vec
    for (size_t i = 0; i < my_vec.size(); i++)
    {
        std::cout << my_vec[i] << '\n';
    }

    // Another way to loop a vec, same as "for num in list: " in Python
    for (int num : my_vec) // here the loop only take int, or types can be upgrade of downgrade to int
    {
        std::cout << num << '\n';
    }

    // Use auto type for the loop, can get all items with whatever types
    for (auto num : my_vec) // It will copy all items and save them into somewhere else.
    {
        std::cout << num << '\n';
    }

    // Use auto type and... use pointer to get each items without copying them.
    // save memory.
    for (auto &num : my_vec)
    {
        std::cout << num << '\n';
    }
    return 0;
}