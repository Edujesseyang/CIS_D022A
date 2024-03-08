#include <iostream>

typedef int Arr[5];

struct Cat
{
    std::string name;
    int age;
    std::string type;
    float weight;
    std::string color;
};

void print_cat_info(Cat cat)
{
    std::cout << "Cat's Infomation:\n";
    std::cout << "\tName: " << cat.name
              << "\n\tAge: " << cat.age
              << "\n\tType: " << cat.type
              << "\n\tWeight: " << cat.weight
              << "\n\tColor: " << cat.color << "\n\n\n";
}

int main()
{
    Arr my_arr;
    int my_num;
    for (size_t i = 0; i < 5; i++)
    {
        my_arr[i] = 4;
    }

    Cat my_cats[3] = {
        {"Lucky", 5, "Short hair", 11.6, "Gray"},
        {"Sushi", 3, "Country cat", 13.5, "Brown"},
        {"Klee", 2, "Stray cat", 7.5, "White/Brown"}};

    for (Cat cat : my_cats)
        print_cat_info(cat);

    std::string name = my_cats[0].name;
    std::cout << name << '\n';

    for(int num : my_arr)
        std::cout << num << '\n';

    return 0;
}