#include <iostream>
#include <string>
#include <vector>

// include the header file in the dir
#include "C:\\Users\\jcjcr\\OneDrive\\desktop\\code\\CIS_D022A\\class\\Student.h"

// **********************
//     Class Student
// **********************
Student::Student() {} // set the main class func

// pass all private vars to the class structure
Student::Student(const std::string &first_name, const std::string &last_name, int id, float grade)
    : m_first_name(first_name), m_last_name(last_name), m_id(id), m_grade(grade)
{
}

// a few func that work with the class
float Student::get_grade() const
{
    return m_grade;
}

std::string Student::get_name() const
{
    return m_first_name + m_last_name;
}

int Student::get_id() const
{
    return m_id;
}

void Student::print() const
{
    std::cout << "Student Infomation: \n";
    std::cout << "\tFirst Name:    \t" << m_first_name << '\n';
    std::cout << "\tLast Name:     \t" << m_last_name << '\n';
    std::cout << "\tStudent ID:    \t" << m_id << '\n';
    std::cout << "\tStudent grade: \t" << m_grade << '\n';
}

void Student::change_grade(float new_grade)
{
    m_grade = new_grade;
}

// **********************
//     Class Course
// **********************
class Course
{
private:
    std::string m_name = "Course name";
    std::string m_prof = "Prof name";
    int m_limit = 40;
    float m_credit = 5.0;
    std::vector<Student> m_student;

public:
    Course() {}
    Course(const std::string &name, const std::string &prof, int limit, float credit)
        : m_name(name), m_prof(prof), m_limit(limit), m_credit(credit)
    {
    }
    std::string get_name() const
    {
        return m_name;
    }
    std::string get_prof() const
    {
        return m_prof;
    }
    int get_limit() const
    {
        return m_limit;
    }
    float get_credit() const
    {
        return m_credit;
    }
    void print_info() const
    {
        std::cout << "Course Infomation: \n";
        std::cout << "\tStudent:     \t" << m_name << '\n';
        std::cout << "\tProfessor:   \t" << m_prof << '\n';
        std::cout << "\tClass limit: \t" << m_limit << '\n';
        std::cout << "\tCredit:      \t" << m_credit << '\n';
    }
    void Course::change_name(std::string new_name)
    {
        m_name = new_name;
    }
    void add_student(const Student &student)
    {
        m_student.push_back(student);
    }
    void print_student_list()
    {
        for (size_t i = 0; i < m_student.size(); i++)
        {
            std::cout << "Student list: \n";
            std::cout << '\t' << m_student[i] << '\n';
        }
    }
};
// *******************************
//           MAIN
// *******************************
int main(int argc, char *argv[])
{
    // set class with args
    Student Yang("Jesse", "Yang", 6250, 3.5);
    Student Jiang("Chloe", "Jiang", 9527, 3.8);
    Student Lucky("Lucky", "Meow", 1007, 2.8);
    const Student Sushi("Sushi", "Meow", 1522, 2.0);

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

    Sushi.print();
    std::cout << '\n';

    Course Calculus("MATH1A", "Prof Yang", 40, 5.0);
    Course Soc("SOCD011", "Prof. Jim", 50, 4.0);
    Course cpp("CISD022", "Prof. Lee", 60, 5.5);
    const Course engr("ENGR10", "Prof. Satifa", 40, 5.0);

    Calculus.print_info();
    std::cout << '\n';

    Soc.print_info();
    std::cout << '\n';

    cpp.print_info();
    std::cout << '\n';

    cpp.change_name("Python");
    std::cout << '\n';

    cpp.print_info();
    std::cout << '\n';

    engr.print_info();
    std::cout << '\n';

    // engr.change_name("English 1A");
    // std::cout << '\n';

    engr.print_info();
    std::cout << '\n';

    std::string prof_lee = cpp.get_prof();
    std::cout << "CPP prof name is " << prof_lee << '\n';

    return 0;
}
