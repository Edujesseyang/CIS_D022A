#include <iostream>
#include <ctime>

int main()
{
  char keep_going;
  std::cout << "Ready to go?" << std::endl;
  std::cin >> keep_going;
  int bot_num;
  while (keep_going == 'y' || keep_going == 'Y')
  {
    bot_num = get_rand();
    switch (bot_num)
    {
    case bot_num == 0:
      std::cout << "Rock! " << std::endl;
    case bot_num == 1:
      std::cout << "Paper! " << std::endl;
    case bot_num == 3:
      std::cout << "Sesser!! " << std::endl;
    }


}

return 0;
}

int get_rand()
{
  srand(time(nullptr));
  return rand() % 2;
}
int get_user_num()
{
  int pick;
  std::cout << "0 is rock, 1 is paper, 2 is sesser"
  std::cout << "Enter your choose:";
  std::cin >> pick;
  return pick;
}