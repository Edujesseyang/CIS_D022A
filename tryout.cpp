#include <iostream>

int static_var(int input = 100)
{
	static int num = input;
	num += 1;
	return num;
}

int add_up(int x, int y = 0, int z = 0)
{
	return x + y + z;
}

void print_add(int &var)
{
	std::cout << var << '\n';
}

int main(int argc, char *argv[])
{
	int num = static_var();
	int num2 = static_var(200);
	int num3 = static_var(300);

	std::cout << num << '\n';
	std::cout << num2 << '\n';
	std::cout << num3 << '\n';

	int sum = add_up(12, 34, 54);
	int sum1 = add_up(12, 32);
	int sum1 = add_up(12, 32);
	int sum1 = add_up(12, 32);
	std::cout << sum << '\n';
	std::cout << sum1 << '\n';

	int my_num = 123;
	print_add(my_num);
	std::cout << &my_num << '\n'

	return 0;
}