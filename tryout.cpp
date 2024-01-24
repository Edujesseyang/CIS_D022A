#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

long get_rand_num();
long get_user_input();

int main()
{
  
  cout << "You have 5 sec to enter the target num." << endl;
  cout << "Are you ready? ";
  cin.get();

  long target_num = pow(get_rand_num(), 2);
  cout << "The target number is: " << endl;
  cout << target_num << endl;
  cout << "You have 5 sec to enter the target num." << endl;

  cout << "Ready GO!" << endl;

  
  
  long time_1 = time(nullptr);
  long user_input = get_user_input();
  long time_2 = time(nullptr);

  if (user_input == target_num)
  {
    cout << "Good job. " << endl;
    if (time_2 - time_1 >= 5)
    {
      cout << "But you lose, because you are too slow, ";
    }
    cout << "You spend " << time_2 - time_1 << " s." << endl;
    if (time_2 - time_1 < 5)
    {
      cout << "You are fast as fuck! ";
    }
  }
  else
  {
    cout << "Yor entered a wrong number, You lose!" << endl;
  }

  cin.get();
  return 0;
}

long get_rand_num()
{
  unsigned seed = static_cast<unsigned>(time(nullptr));
  srand(seed);
  return rand() % 100000000;
}

long get_user_input()
{
  int input_num;
  cout << "Enter:";
  cin >> input_num;
  cin.get();
  return input_num;
}