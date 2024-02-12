#include <iostream>

float c_to_f(float c);

int main()
{
  float c_degree;
  std::cout << "Enter the degree in Celsius: \n";
  std::cin >> c_degree;

  float f_degree = c_to_f(c_degree);
  std::cout << c_degree << " C = " << f_degree << " F. \n";
  return 0;
}

float c_to_f(float c)
{
  return c * 9 / 5 + 32;
}