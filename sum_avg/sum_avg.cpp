#include <iostream>
using namespace std;

int sum_func(int x, int y, int z);
int avg_func(int sum, int amount);

int main()
{
    int a, b, c, sum;

    cout << "enter num 1: ";
    cin >> a;

    cout << "enter num 2: ";
    cin >> b;

    cout << "enter num 3: ";
    cin >> c;
    cout << "" << endl;

    cout << "The sum of your nums is: " << sum_func(a, b, c) << endl;
    cout << "" << endl;

    cout << "The avg of your nums is: " << avg_func(sum_func(a, b, c), 3) << endl;
    cout << "" << endl;

    return 0;
}

int sum_func(int x, int y, int z)
{
    return x + y + z;
}

int avg_func(int sum, int amount)
{
    return sum / amount;
}