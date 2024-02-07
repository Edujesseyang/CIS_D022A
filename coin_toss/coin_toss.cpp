#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int get_rand();
string coin_throw(int rand);
void print_result(string result);

int main()
{
    char r_status;
    cout << "Are you ready? enter y to start." << endl;
    cin >> r_status;
    int rand_num;
    string result;
    while (r_status == 'Y' || r_status == 'y')
    {
        rand_num = get_rand();
        result = coin_throw(rand_num);
        print_result(result);
        cout << "Are you ready? (y/n)" << endl;
        cin >> r_status;
    }
    return 0;
}

int get_rand()
{
    unsigned seed = static_cast<int>(time(nullptr));
    srand(seed);

    int rand_num = rand() % 2;
    return rand_num;
}

string coin_throw(int rand)
{
    if (rand == 0)
    {
        return "Head";
    }
    else
    {
        return "Number";
    }
}

void print_result(string result)
{
    cout << "Yor are " << result << "." << endl;
}