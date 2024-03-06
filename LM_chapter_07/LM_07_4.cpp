#include <iostream>
const int DATA_SIZE = 100;
typedef int data_array[DATA_SIZE];

void data_input(data_array input_array, int size);
void data_clean(data_array input_array, int size);
void data_statistic(data_array input_array, int size);

int main()
{
    data_array age_data;
    int data_size = DATA_SIZE;
    data_clean(age_data, data_size);
    data_input(age_data, data_size);
    data_statistic(age_data, data_size);
    return 0;
}

void data_clean(data_array input_array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        input_array[i] = -1;
    }
}

void data_input(data_array input_array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Enter the age (enter a negative number to finish): ";
        std::cin >> input_array[i];
        if (input_array[i] < 0)
        {
            break;
        }
    }
}

void data_statistic(data_array input_array, int size)
{
    int temp_count;
    for (size_t i = 0; i < size; i++)
    {
        if (input_array[i] < 0)
            continue;
        temp_count = 1;
        for (size_t j = i + 1; j < size - 1; j++)
        {
            if (input_array[i] == input_array[j])
            {
                temp_count++;
                input_array[j] = -1;
            }
        }
        std::cout << "The number of people " << input_array[i] << "years old is: " << temp_count << '\n';
    }
}