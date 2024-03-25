#include <iostream>
#include <random>
#include <ctime>
#include <string>

int get_rand();

int main()
{
    std::string magic8ball[12] = {
        "Yes, of course!",
        "Without a doubt, yes.",
        "You can count on it.",
        "For sure!",
        "Ask me later.",
        "I'm not sure.",
        "I can't tell you right now.",
        "I'll tell you afterwards.",
        "No way!",
        "I don't think so.",
        "Without a doubt, no.",
        "The answer is clearly, NO."
    }; 
    std::cout << "Please enter a question for the computer: \n";
    std::string user_input;
    std::cin >> user_input;
    std::cin.get();
    while(user_input != "bye")
    {
        std::cout << magic8ball[get_rand()] << '\n';
        std::cout << "Do you have another question? enter 'bye' to finish asking.\n";
        std::cin >> user_input;
        std::cin.get();      
    }
    std::cout << "Bye, Thank you for the wonderful conversation!\n";

    return 0;
}

int get_rand()
{
    int seed = time(nullptr);
    srand(seed);
    int rand_num = rand()%12;
    return rand_num;
}