#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = {5, 4, 7, 8, 2, 3, 1, 9, 10, 6};

    // bubble sort type 2:  
    for (size_t i = 0; i < size; i++)
    {
        // inside loop: j should be ended 1 smaller than the size every loop.
        for (size_t j = 0; j < size - i - 1; j++)
        {
            // only swap the j and j+1. no need to involve i.
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
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