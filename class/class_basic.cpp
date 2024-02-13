#include <iostream>
#include <string>
// include the header file in the dir
#include "C:\\Users\\jcjcr\\OneDrive\\desktop\\code\\CIS_D022A\\class\\Student.h"

Student::Student() {} // set the main class func

// pass all private vars to the class structure
Student::Student(std::string first_name, std::string last_name, int id, float grade)
    : m_first_name(first_name), m_last_name(last_name), m_id(id), m_grade(grade)
{
}

// a few func that work with the class
float Student::get_grade()
{
    return m_grade;
}

std::string Student::get_name()
{
    return m_first_name + m_last_name;
}

int Student::get_id()
{
    return m_id;
}

void Student::print()
{
    std::cout << "First Name: " << m_first_name << '\n';
    std::cout << "Last Name: " << m_last_name << '\n';
    std::cout << "Student ID: " << m_id << '\n';
    std::cout << "Student grade: " << m_grade << '\n';
}

void Student::change_grade(float new_grade)
{
    m_grade = new_grade;
}

int main(int argc, char *argv[])
{
    // set class with argmts
    Student Yang("Jesse", "Yang", 6250, 3.5);
    Student Jiang("Chloe", "Jiang", 9527, 3.8);
    Student Lucky("Lucky", "Meow", 1007, 2.8);

    // call those funcs in the class
    Jiang.print();
    std::cout << '\n';

    Lucky.print();
    std::cout << '\n';

    Yang.print();
    std::cout << '\n';

    Lucky.change_grade(3.9);
    std::cout << '\n';

    Lucky.print();
    std::cout << '\n';

    return 0;
}
