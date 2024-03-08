#include <iostream>

struct StudentInfo
{
    // Struc is kind like object in java or dict in Python.

    // format:
    std::string first_name = "First name"; // default value
    std::string last_name = "Last name";
    int age; // age and grade will be 0 as default setting
    float grade;
};

void print_info(StudentInfo student);

int main()
{
    StudentInfo student = {"Chloe", "Jiang", 16, 3.5};
    StudentInfo student_2 = {"Jesse", "Yang"};
    student_2.age = 35;
    student_2.grade = 3.9;

    StudentInfo student_group[] = {
        {"Jack", "Daniel", 56, 2.5},
        {"Marry", "Penny", 48, 3.4},
        {"Kong", "Chung", 13, 3.2},
        {"Pink", "Floyd", 22, 3.1}};

    print_info(student);
    print_info(student_2);

    for(StudentInfo student : student_group)
        print_info(student);
    // or
    // for (size_t i = 0; i < 4; i++)
    //     print_info(student_group[i]);

    return 0;
}

void print_info(StudentInfo student)
{
    std::cout << "First name: " << student.first_name << '\n'
              << "Last name: " << student.last_name << '\n'
              << "Age: " << student.age << '\n'
              << "Grade: " << student.grade << "\n\n\n";
}