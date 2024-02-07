#include <iostream>

using namespace std;

double get_length();
double get_width();
double get_area(double len, double wid);
void print_out(double area);

int main()
{
    double len, wid, area;
    len = get_length();
    wid = get_width();
    area = get_area(len, wid);
    print_out(area);

    return 0;
}

double get_length()
{
    double length;
    cout << "Enter your length: " << endl;
    cin >> length;
    return length;
}

double get_width()
{
    double width;
    cout << "Enter your width: " << endl;
    cin >> width;
    return width;
}

double get_area(double len, double wid)
{
    return len * wid;
}

void print_out(double area)
{
    cout << "The area of the rectangle that your entered is :" << endl;
    cout << area << endl;
}