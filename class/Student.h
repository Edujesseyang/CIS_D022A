#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
private:
    std::string m_first_name = "First name";
    std::string m_last_name = "Last name";
    int m_id = 0;
    float m_grade = 0;

public:
    Student();
    Student(std::string first_name, std::string last_name, int id, float grade);

    float get_grade();
    std::string get_name();
    int get_id();
    void print();
    void change_grade(float new_grade);
};

#endif // STUDENT_H