#include <iostream>

void print(int &var)
{
    std::cout << &var << '\t' << var << '\t' << '\n';
}

int main(int argc, char *argv[])
{
    int num_a = 100;
    int num_b = 232;

    // it means the int *p_num_a = the men loc int of the var num_a
    int *p_num_a = &num_a;
    int *p_num_b = &num_b;

    print(num_a);
    print(num_b);

    *p_num_a = 200; // use pointer to change the value of a var
    print(num_a);

    *(&num_a) = 300; // same as above, point the mem loc of num_a, and set val = 300.
    print(num_a);

    // for security, pointer can be dangerous:
    // if we do:
    *(p_num_b - 1) = 5000; // sometime it will modifies the var without using the var or prt
    print(num_a);

    // print(*p_num_a);  <-------- wrong! because the func only take a ref val as an arg

    return 0;
}