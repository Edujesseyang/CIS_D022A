#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = {5, 7, 4, 4, 8, 9, 9, 3, 10, 2};

    // outside loop: loop "size" times.
    // we want the outside loop swap min and the arr[i] every time i++;
    for (size_t i = 0; i < size; i++)
    {
        int min = arr[0];    // set a compare variable bigger than all int
        int temp = 0;       // set a temp var for swap use
        int index = 0;      // set a temp index to record the index of smallest num in arr

        // inside loop: finding the smallest num every time. 
        // key: the start index should be NOT include the one already squared away.
        // here: j = i. (easy to messed up)
        for (size_t j = i; j < size; j++)
        {
            // every time meet a num smaller than min var. change min to that num.
            if (arr[j] < min)
            {
                min = arr[j];
                index = j; // we need record the index for swap numbers later.
            }         
        }

        // 3 step to swap two nums, A -> temp; B -> A; temp -> B;
        temp = arr[i];
        arr[i] = min;
        arr[index] = temp;

    }
    
    // cout all
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\t';
    }
}