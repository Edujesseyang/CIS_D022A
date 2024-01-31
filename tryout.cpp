#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string get_bot();
string get_user();
string winner_check(string bot, string user, string name);

int main()
{
  char keep_going;
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Ready to go? (Y/N)" << endl;
  cin >> keep_going;
  string bot_move, user_move;
  string winner;
  while (keep_going == 'y' || keep_going == 'Y')
  {
    cout << "Ready to go? (Y/N)" << endl;
    cin >> keep_going;

    bot_move = get_bot();
    user_move = get_user();
    if (bot_move != user_move)
    {
      winner = winner_check(bot_move, user_move, name);
      cout << "You: " << user_move << endl;
      cout << "Computer: " << bot_move << endl;
      cout << winner << " win." << endl;
      continue;
    }
    else if (bot_move == user_move)
    {
      cout << "Tight!" << endl;
      continue;
    }
  }

  return 0;
}

string get_bot()
{
  string result;
  srand(time(nullptr));
  int bot_num = rand() % 2;
  if (bot_num == 0)
  {
    result = "rock";
  }
  else if (bot_num == 1)
  {
    result = "paper";
  }
  else if (bot_num == 2)
  {
    result = "sesser";
  }
  return result;
}

string get_user()
{
  string result;
  int pick;
  cout << "0 is rock, 1 is paper, 2 is sesser. " << endl;
  cout << "Enter your choose:";
  cin >> pick;
  if (pick == 0)
  {
    result = "rock";
  }
  else if (pick == 1)
  {
    result = "paper";
  }
  else if (pick == 2)
  {
    result = "sesser";
  }
  return result;
}

string winner_check(string bot, string user, string name)
{
  string result;
  if (bot == "rock")
  {
    if (user == "paper")
    {
      result = name;
    }
    else if (user == "sesser")
    {
      result = "Computer";
    }
  }

  if (bot == "paper")
  {
    if (user == "sesser")
    {
      result = name;
    }
    else if (user == "rock")
    {
      result = "Computer";
    }
  }

  if (bot == "sesser")
  {
    if (user == "rock")
    {
      result = name;
    }
    else if (user == "paper")
    {
      result = "Computer";
    }
  }
  return result;
}