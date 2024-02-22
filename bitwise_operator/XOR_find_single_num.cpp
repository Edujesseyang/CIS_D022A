#include <iostream>
#include <vector>

// Using XOR to find the single number in vector.
// 这个程序运用里异或0为本身,异或本身为零的特性, 实现里从一组数字中找到单独出现的数的功能.
// 异或符号: ^
// a ^ 0 = a;
// a ^ a = 0;
int find_single(std::vector<int> v);

int main()
{
    // 测试数组中, 只有4 是单独存在的.
    std::vector<int> test_case1 = {1, 1, 2, 5, 6, 4, 6, 5, 2};
    int test_result1 = find_single(test_case1);
    std::cout << test_result1 << std::endl;

    // 测试数组2中, 只有64 是单独存在的.
    std::vector<int> test_case2 = {12, 52, 12, 24, 17, 51, 65, 46, 65, 52, 17, 51, 24};
    int test_result2 = find_single(test_case2);
    std::cout << test_result2 << std::endl;

    return 0;
}

int find_single(std::vector<int> v)
{
    int size = v.size();
    // 初始化结果变量为0; 因为0异或任何数都得他本身.
    int result = 0;

    // loop vector中的每一位, 将异或出的结果值赋予结果变量.
    for (int i = 0; i < size; i++)
        result = v[i] ^ result;

    return result;
}