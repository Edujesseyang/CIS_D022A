#include <iostream>

int main()
{
    int num = 300;
    int *num_ptr = &num; // pointer = reference

    // cout ptr itself, we get a memory address.
    std::cout << num_ptr << '\n';

    // cout *ptr, we get the value that storing in that address.
    std::cout << *num_ptr << '\n';

    // change var's value use *ptr
    *num_ptr = 500;
    std::cout << num_ptr << '\n';
    std::cout << *num_ptr << '\n';

    // int* ptr_a; 未初始化的指针要避免, 因为它的值有可能指向其他内存空间. 危险!!
    // 这种指针叫做无效指针或者野指针.
    int *ptr_x; // 只有定义,但没有赋值不可以, 危险!
    ptr_x = 0; // 这样是可以的, 先定义一个指针, 再给他赋值.

    // 空指针是可以的.
    int *ptr_a = nullptr; // 让一个空指针等于空指针时, 用于以后使用.
    int *ptr_b = NULL; // c style 空指针.
    int *ptr_c = 0; // 一样时空指针.

    // void 指针.
    int num2 = 400;
    char ch_a= 'a';
    void *V_ptr = &num2; // 表示该指针指向一个任意类型的数据.
    V_ptr = &ch_a; // 也可以指向char
    // 但是,不可以用 *v_ptr 来操作, 因为void* 不知道它指向的var的大小.
    
    // 二级指针
    int num3 = 1024;
    int *p_num3 = &num3;
    int **pp_num3 = &p_num3;
    std::cout << "Var = " << *p_num3 << '\n';
    std::cout << "*ptr = " << p_num3 << '\n';
    std::cout << "Use double ptr:\n";
    std::cout << "var = " << **pp_num3 << '\n';
    std::cout << "**ptr = " << pp_num3 << '\n';
    // 可以三级四级.....无限套娃指针
    return 0;
}