#include <iostream>
#include <string>

int main()
{
    // define a string;
    std::string my_str;

    // string define and copy a const value to the str var
    std::string my_str_2 = "Hello world!";

    // string copy
    my_str = my_str_2;

    // string initialize (will not create a const value, directly give a str var a value)
    std::string my_str_3("how are you?");

    // string repeat (repeat n times of a char)
    std::string my_str_4(5, 'A');

    // copy by reference
    std::string *ptr = &my_str_3;
    std::string my_str_5 = *ptr;

    // use index to get char
    std::cout << my_str_3[5] << '\n';

    // get size of the string
    std::cout << my_str.size() << '\n';

    // find the last char
    std::cout << my_str[my_str.size() - 1] << '\n';

    // change one of the char
    my_str[my_str.size() - 1] = '?';

    std::cout << my_str << '\n';
    std::cout << my_str_2 << '\n';
    std::cout << my_str_3 << '\n';
    std::cout << my_str_4 << '\n';
    std::cout << my_str_5 << '\n';

    // for loop the string
    for (size_t i = 0; i < my_str_5.size(); i++)
    {
        std::cout << my_str_5[i] << '\n';
    }

    // better loop
    for (char c : my_str_4)
    {
        std::cout << c << '\n';
    }

    // string comcast
    std::string str_1 = "You are";
    std::string str_2 = "the hero";
    std::string str_3 = str_1 + " " + str_2 + '!' + '\n';
    std::string str_4 = "hi, " + str_3;
    // std::string str_5 = "this is " + "not right!";  <-- can't do this
    // cant be in " " or ' ',  but one of them has to be a defined string type variable
    std::cout << str_3;
    std::cout << str_4;
    

    // string compare (==)
    if(my_str_5 == my_str_3)
    {
        std::cout << "my_str_5 == my_str_3 is true\n";
    }

    // string length compare (<, >, <=, >=)
    if(str_1 > str_2)
    {
        std::cout << "str_1 is longer\n";
    }
    else{
        std::cout << "str_2 is longer\n";
    }

    // c style string
    char string_1[] = {'a', 'b', 'c', 'd', 'e'};
    for(char c : string_1)
        std::cout << c << '\t';
    std::cout << '\n';

    return 0;
}