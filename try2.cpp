#include <iostream>

int main() {
	int arr[3] = {1, 2, 3};
	
	std::cout << "arr= " << arr << std::endl;  // Here, cout the memory location of the first element in the array.
	std::cout << "arr[0]= " << &arr[0] << std::endl;  // It will be same as cout arr itself.
	
	int *ptr_arr = arr;  // Defined a int* to pointing the mem loc of arr.
 	
	for (int num : arr)
        std::cout << num << ' ' ;  // If we print all elements, the if will be "100 2 3".




    return 0;
}
