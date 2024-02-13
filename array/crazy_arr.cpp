#include <iostream>

int main()
{
    int arr[2] = {1, 2};
    std::cout << arr[0];
    std::cout << '\n';
    std::cout << arr[1];
    std::cout << '\n';

    // this is how crazy c++ is, if you put arr[index] as index[arr], it will work.
    std::cout << 0 [arr];
    std::cout << '\n';
    std::cout << 1 [arr];
    return 0;
}
