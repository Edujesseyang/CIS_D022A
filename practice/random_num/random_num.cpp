#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int64_t seed = static_cast<int64_t>(time(nullptr)); // best to get a current time to be a seed in all kinds of device

    srand(seed); // import seed to srand func

    int rand_num = rand() % 6 + 1; // create a rand num on [1, 6]

    cout << rand_num << endl; // cout

    return 0;
}