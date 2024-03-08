#include <iostream>
enum Week
{
    // Here if no value gave to the enum var. 
    // the default will be start 0,
    // every following item will add 1.
    Sun ,
    Mon ,
    Tue ,
    Wed ,
    Thu ,
    Fri ,
    Sat 

};

enum class FoodPrice
{
    burger ,
    noodle ,
    coke 
};

float get_price(FoodPrice item)
{
    switch (item)
    {
    case FoodPrice::burger:
        return 5.99f;
    case FoodPrice::noodle:
        return 3.99f;
    case FoodPrice::coke:
        return 1.99;
    default:
        return 0.00f;
    }
}

int main()
{
    std::cout << Sun << '\n';
    std::cout << Mon << '\n';
    std::cout << Tue << '\n';
    std::cout << Wed << '\n';
    std::cout << Thu << '\n';
    std::cout << Fri << '\n';
    std::cout << Sat << '\n';

    float burger_price = get_price(FoodPrice::burger);
    float noodle_price = get_price(FoodPrice::noodle);
    float coke_price = get_price(FoodPrice::coke);

    float total = burger_price + noodle_price + coke_price;
    std::cout << "Total price is: " << total << '\n';

    return 0;
}