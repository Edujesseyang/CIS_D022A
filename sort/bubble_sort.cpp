#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = {5, 4, 7, 8, 2, 3, 1, 9, 10,6};

    // bubble sort: swap two nums next to each other if first one is bigger than the following one.

    // outside loop: 
    for (size_t i = 0; i < size; i++)
    {
        int temp; // set a temp for swap
        for (size_t j = i+1; j <= size;j++)
        {
            // check if the one behind is smaller than the one in the front.
            // key: the way to make their index, you can't use [i + 1]; you have to involve the index j, init j one bigger than i.
            if (arr[j] < arr[i])
            {
                // if so, swap them
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // cout all
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\t';
    }
    return 0;
}