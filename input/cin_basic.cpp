#include <iostream>
#include <string>

int main()
{
    // cin example 1: cin >> var1 >> var2 >> ....
    // space will separate the vars
    std::string word1, word2, word3, word4;
    std::cout << "enter words: ";
    std::cin >> word1 >> word2 >> word3 >> word4;
    std::cout << word1 << '\n';
    std::cout << word2 << '\n';
    std::cout << word3 << '\n';
    std::cout << word4 << '\n';
    std::cin.get();

    // example 2: getline(cin, var);
    // will get all word until  '\n'
    std::string text;
    std::cout << "enter text:";
    getline(std::cin, text);
    std::cout << text << '\n';

    // example 3: use cin.get() to get char
    std::cout << "enter a char: ";
    char ch = std::cin.get();
    std::cin.get();
    std::cout << "The key you pressed is " << ch << '\n';

    // example 4: use cin.get() to get a char array.
    char my_char_arr[5];
    std::cin.get(my_char_arr, 5);
    for (char ch : my_char_arr)
        std::cout << ch << ' ';
    std::cout << '\n';

    return 0;
}