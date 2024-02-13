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
    Student(const std::string& first_name, const std::string& last_name, int id, float grade);

    float get_grade() const;
    std::string get_name() const;
    int get_id() const;
    void print() const;
    void change_grade(float new_grade);
};

#endif // STUDENT_H