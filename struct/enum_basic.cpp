#include <iostream>
enum Week
{
    // Here if no value gave to the enum var.
    // the default will be start 0, you can change it
    // every following item will add 1.
    Sun,
    Mon,
    Tue,
    Wed = 10,
    Thu,
    Fri,
    Sat

};

// 枚举的经典用法是用来定义一批有连续性特征的变量. 因为枚举的特点就是递增.
enum class FoodPrice
{
    // 这里假设coke的价格是3, 汉堡是4, 面条是5.
    coke = 3,
    burger,
    noodle,

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

std::string get_style(FoodPrice item)
{
    switch (item)
    {
    case FoodPrice::burger:
        return "Spicy chicken";
    case FoodPrice::coke:
        return "Orange flavor coke";
    case FoodPrice::noodle:
        return "LanZhou style beef";
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
    std::cout << Sat << "\n\n";

    // 强制类型转换, 这时 today 的类型是Week, 其值是3. 即使Week里面没有3.
    Week today = Week(3);
    std::cout << "Today = " << today << "\n\n";

    // 对于enum class, 为了安全性考量, 其中的数据不可以直接拿来当作整数使用.
    int my_order = static_cast<int>(FoodPrice::burger); // 必须static_cast.
    std::cout << "You need to pay: " << my_order << "\n\n";

    // 也可以用外部方程来修改enum里面的值
    float burger_price = get_price(FoodPrice::burger);
    float noodle_price = get_price(FoodPrice::noodle);
    float coke_price = get_price(FoodPrice::coke);
    float total = burger_price + noodle_price + coke_price;
    std::cout << "Total price is: " << total << '\n';
    std::cout << '\n';

    // 或者
    std::cout << "The style of noodle is " << get_style(FoodPrice::noodle) << '\n';
    std::cout << "The style of burger is " << get_style(FoodPrice::burger) << '\n';
    std::cout << "The style of coke is " << get_style(FoodPrice::coke) << "\n\n";



    return 0;
}