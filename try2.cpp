#include <iostream>

int my_rec(int n);
int main()
{
    std::cout << my_rec(-2) << '\n';
    std::cout << my_rec(-1) << '\n';
    std::cout << my_rec(0) << '\n';
    std::cout << my_rec(3) << '\n';

    return 0;
}
int my_rec(int n)
{
    if (n < 0)
        return -1;
    return my_rec(n + 1);
}
