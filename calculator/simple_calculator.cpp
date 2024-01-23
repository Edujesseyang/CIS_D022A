#include <iostream>
#include <string>
using namespace std;

string get_input();
void print_result(int x, int y, int op);


int main()
{
    string raw_string = get_input();
    int len = raw_string.length();

    int num1, num2;
    string num1s, num2s;
    int stopper_index;
    int operator_status;
    for (int i = 0; i < len; i++)
    {
        if (raw_string[i] != '+' && raw_string[i] != '-' && raw_string[i] != '*' && raw_string[i] != '/')
        {
            num1s.push_back(raw_string[i]);
        }
        else if (raw_string[i] == '+')
        {
            stopper_index = i;
            operator_status = 1;
            break;
        }
        else if (raw_string[i] == '-')
        {
            stopper_index = i;
            operator_status = 2;
            break;
        }
        else if (raw_string[i] == '*')
        {
            stopper_index = i;
            operator_status = 3;
            break;
        }
        else if (raw_string[i] == '/')
        {
            stopper_index = i;
            operator_status = 4;
            break;
        }
    }

    for (int i = stopper_index + 1; i < len; i++)
    {
        num2s.push_back(raw_string[i]);
    }

    num1 = stoi(num1s);
    num2 = stoi(num2s);

    if(num2 == 0 && operator_status == 4)
    {
        cout << "Error (0 divider)" << endl;

    }

    print_result(num1, num2, operator_status);
    cin.get();

    return 0;
}

string get_input()
{
    string raw_input;
    cin >> raw_input;
    cin.get();
    return raw_input;
}

void print_result(int x, int y, int op)
{
    if (op == 1)
    {
        cout << x + y << endl;
    }
    else if (op == 2)
    {
        cout << x - y << endl;
    }
    else if (op == 3)
    {
        cout << x * y << endl;
    }
    else if (op == 4)
    {
        cout << x / y << endl;
    }
}


