#include <iostream>
#include <cmath>

void print_heart(double a, char ink);
void print_circle(double r, char ink);

int main()
{
    double user_in;
    char user_c;
    std::cout << "Enter size and ink for heart:\n";
    std::cin >> user_in >> user_c;
    print_heart(user_in, user_c);

    std::cout << "Enter size and ink for circle:\n";
    std::cin >> user_in >> user_c;
    print_circle(user_in, user_c);
    return 0;
}

void print_heart(double a, char ink)
{
    double bound = 1.3 * sqrt(a);
    double step = 0.05;
    for (double y = bound; y >= -bound; y -= step)
    {
        for (double x = -bound; x <= bound; x += step / 2)
        {
            double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
            if (result <= 0)
            {
                std::cout << ink;
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

void print_circle(double r, char ink)
{
    double bound = 1.3 * r;
    for (double y = bound; y >= -bound; y -= 0.5)
    {
        for (double x = -bound; x <= bound; x += 0.25)
        {
            double result = pow(x, 2) + pow(y, 2) - pow(r, 2);
            if(result <= 0)
            {
                std::cout << ink;
            }
            else{
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}