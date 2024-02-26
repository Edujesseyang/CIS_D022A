#include <iostream>

int main()
{
    int my_arr[4][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {1, 2, 3, 4},
            {5, 6, 7, 8}
        };

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            std::cout << my_arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}