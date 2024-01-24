#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  
  srand(time(nullptr));
  cout << rand() % 10 + 1 << endl;
  
  return 0;

}