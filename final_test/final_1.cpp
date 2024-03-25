#include <iostream>

void num_check(int arr[], int size, int n);

int main()
{
	const int SIZE = 10;
	const int TARGET_NUM = 4;
	int test_arr[SIZE] = {5, 7, 10, 12, -2, 0, 4, -45, 1, -45};

	num_check(test_arr, SIZE, TARGET_NUM);
		
	return 0;
}

void num_check(int arr[], int size, int n)
{
	std::cout << "Numbers greater than " << n << " in the array are: ";
	for(size_t i = 0; i < size; i++)
	{
		if(arr[i]> n)
		{
			std::cout << arr[i] << ' '; 
		}
	}
	std::cout << '\n';
}