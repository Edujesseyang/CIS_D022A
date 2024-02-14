#include <iostream>

template <typename T> // using template to allow us to input dynamic type of val for our class
class DynamicArray
{
private:
    size_t m_size;
    T *m_array;

public:
    DynamicArray(size_t size)
        : m_size(size), m_array(new T[size])
    {
        std::cout << "Array Constructed: \n";
    }

    ~DynamicArray() // key part: This ~ tail will free the mem after finished using the array
    {
        delete[] m_array;
        std::cout << "Array Destructed.\n";
    }
    T get(size_t index) const
    {
        return m_array[index];
    }

    void set(size_t index, T val)
    {
        m_array[index] = val;
    }

    void print() const
    {
        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << '\t' << i << '\t' << m_array[i] << '\n';
        }
    }

    const T &operator[](size_t index) const // define a operator, let const use print
    {
        return m_array[index];
    }
    T &operator[](size_t index)  // make non const version, let it use as .set()
    {
        return m_array[index];
    }
};

int main(int argc, char *argv[])
{
    DynamicArray<int> my_arr(10); // use this dynamic class for int array
    const DynamicArray<float> my_f_arr(5); // create a const arr that can not be modify

    my_arr.print();

    for (int i = 0; i < 10; i++)
    {
        my_arr.set(i, 10 * i);
    }
    my_arr.print();

    my_arr.set(3, 34.544); // input a val a float
    my_arr[9] = 2000; // use the operator way to give val to arr

    my_arr.print();        // print

    // my_f_arr[0] == 1.0;
    // my_f_arr[1] == 2.0;
    // my_f_arr[2] == 3.0;
    // my_f_arr[3] == 4.0;
    // my_f_arr[4] == 5.0;
    // they will not work because this is const

    my_f_arr.print();

    return 0;
}