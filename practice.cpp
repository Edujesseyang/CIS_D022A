#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     int num;

//     cout << "enter a number:" << endl;
//     cin >> num;

//     float result = num / 2;
//     cout << "half of your number is " << result << "!\n"
//          << endl;

//     return 0;
// }

// ==========================

// int main()
// {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;

//     cout << "Hello " << name << "!" << endl;

//     cin.get();
//     cin.get();
//     return 0;
//  // 这里两个cin.get() 为了等待键盘输入, 这样可直接点击exe文件来运行程序
// }

//================================================

// int main()
// {
//     int num;
//     cout << "enter a number: ";
//     cin >> num;
//     cin.get(); // 第一个get 使第一个回车后继续运行

//     cout << "Are you sure? (Y/N): ";

//     char answer;
//     cin >> answer;
//     cin.get(); //第二个get 使第二个回车后继续运行

//     int result;
//     if (answer == 'Y' || answer == 'y')
//     {
//         cout << "Double your number is " << num * 2 << "!" << endl;
//     }
//     else
//     {
//         cout << "don't worry" << endl;
//     }

//     cin.get();// 第三个回车等待运行至return
//     // 这里我们的程序需要两次回车输入, 第一次是enter a number, 第二次是 y/n,
//     // 所以需要3个cin.get() 来阻止当按下第二次回车后程序直接退出.

//     return 0;
// }

// =============================================

string get_name();

int main()
{
    string name = get_name();
    cout << "hello, " << name << "!" << endl;
    cin.get();
    return 0;
}

string get_name(void)
{
    string name;
    cout << "enter your name: ";
    cin >> name;
    cin.get();
    return name;
}