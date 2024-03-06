#include <iostream>
#include <string>

int main()
{
    // define a string;
    std::string my_str;

    // string define and copy a const value to the str var
    std::string my_str_2 = "Hello world";

    // string copy
    my_str = my_str_2;

    // string initialize (will not create a const value, directly give a str var a value)
    std::string my_str_3("how are you?");

    // string repeat (repeat n times of a char)
    std::string my_str_4(5, 'A');

    // copy by reference
    std::string* ptr = &my_str_3;
    std::string my_str_5 =  *ptr;

    std::cout << my_str << '\n';
    std::cout << my_str_2 << '\n';
    std::cout << my_str_3 << '\n';
    std::cout << my_str_4 << '\n';
    std::cout << my_str_5 << '\n';
    return 0;
}