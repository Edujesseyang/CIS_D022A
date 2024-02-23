#include <iostream>
#include <vector>

int main()
{
    // 类似于Python 中的 for num in dict: 

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int num : arr)
    {
        std::cout << num << ' ';
    }
    std::cout << '\n';

    std::vector<int> vec = {15, 48, 62, 35, 94, 15, 26, 34, 68, 97};
    for(int num : vec)
    {
        std::cout << (~num)  << ' ';
    }
    std::cout << '\n';

    return 0;
}