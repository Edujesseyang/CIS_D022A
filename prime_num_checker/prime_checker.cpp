#include <iostream>

bool is_prime(int num);

int main()
{
    for (size_t i = 1, j = 0; i < 10000; i++)
    {
        if (is_prime(i) == true)
        {
            std::cout << i << '\t';
            j++;
            if (j % 10 == 0)
            {
                std::cout << '\n';
            }
        }

    }
    return 0;
}

bool is_prime(int num)
{
    int factor = 2;
    if (num == 2 || num == 1)
    {

        return true;
    }
    while (factor < num)
    {
        if (num % factor == 0)
        {
            return false;
        }
        if (factor == num - 1)
        {
            return true;
        }
        factor++;
    }
}
