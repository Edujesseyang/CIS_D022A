#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = 1234.53265;
    int after_decimal = 2;
    x = round(x * pow(10, after_decimal)) / pow(10, after_decimal);
    cout << x << endl;

    return 0;
}