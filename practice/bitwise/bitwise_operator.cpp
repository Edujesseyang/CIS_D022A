#include <iostream>
using namespace std;
int main() {
 int x = 5; // binary 101
 int y = 1; // binary 1

 cout << x << " and " << y << " is " << (x & y) << endl;
 /*
    101
    001
   ----- (only when 1 occur on both num at same digit. That digit return 1)
   0 0 1 (都是1, and是1)
        = 1
 
 */

 cout << x << " or " << y << " is " << (x | y) << endl;
 /*
    101
    001
    ----- (if 1 occur on any num at a digit, that digit return 1)
    101   (只要有1, or就是1)
        = 5
 */


 cout << x << " exclusive or " << y << " is " << (x ^ y) << endl;
 /*
    101
    001
    ---- (when 1 occur on any num at a digit, but that digit cannot be all 1)
    100  (有1, 但不都是1, xor才是1)
        = 4
 */
 cout << x << " bits flipped is " << (~x) << endl;
/*
    flip 5:
        101
        ---- (flip all digit)
        010  
            == 2
    ---但是! 在大多数数据类型中, 5 其实为 000000000000101,  flip后其实是 111111111111010.
        不能一概而论.
*/
 cout << x << " right shift by 1 is " << ( x >> 1) << endl;
/*
    101 
     10  (所有位向右边移动一位, 最右位则消除掉)
    = 2
*/

 cout << x << " left shift by 1 is " << ( x << 1);
 /*
    101
   1010   (所有位向左边移动一位, 最右位则用0填补)
    = 10
 */
 cout << " whose value in octal is " << oct << showbase << (x << 1) << endl;
 return 0;
}