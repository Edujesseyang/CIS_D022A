#include <iostream>

void print(int &var) // pass be ref
{
    std::cout << &var << '\t';                      // print the location
    std::cout << var << ' ' << sizeof(var) << '\n'; // print the value and size
}
int main(int argc, char *argv[])
{
    int a = 10;
    int b = 20;

    print(a);
    print(b);

    int array1[10];      // define array without give them value.
    int array2[10] = {}; // define array give them a default value.

    for (size_t i = 0; i < 10; i++)
    {
        // print the array1 info, we see all value are random.
        // because the c++ will return whatever value leftover in the memory location.
        print(array1[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        // array2 set default value as 0
        // it will not be like random value
        print(array2[i]);
    }

    // make a heap array
    int *h_array = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        // print the heap array out,
        // we can see all mem loc will be so much diff than stack array
        // and it also all rand values
        print(h_array[i]);
    }

    delete[] h_array; // free the heap mem after using *h_array.

    return 0;
}