#include <iostream>
using namespace std;
int main() {
 int x = 5; // binary 101
 int y = 1; // binary 1
 cout << x << " and " << y << " is " << (x & y) << endl;
 cout << x << " or " << y << " is " << (x | y) << endl;
 cout << x << " exclusive or " << y << " is " << (x ^ y) << endl;
 cout << x << " bits flipped is " << (~x) << endl;
 cout << x << " right shift by 1 is " << ( x >> 1) << endl;
 cout << x << " left shift by 1 is " << ( x << 1);
 cout << " whose value in octal is " << oct << showbase << (x << 1) << endl;
 return 0;
}