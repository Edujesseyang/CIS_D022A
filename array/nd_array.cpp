#include <iostream>

int main()
{
	int arr[3][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
		};
	for(auto& row : arr)
	{
		for(auto num : row)
		{
			std::cout << num << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}