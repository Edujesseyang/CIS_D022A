#include <iostream>

int static_var(int input = 100)
{
	static int num = input;
	num += input;
	return num;
}

int main(int argc, char *argv[])
{
	int num = static_var();
	int num2 = static_var(200);
	int num3 = static_var(300);

	std::cout << num << '\n';
	std::cout << num2 << '\n';
	std::cout << num3 << '\n';

	return 0;
}