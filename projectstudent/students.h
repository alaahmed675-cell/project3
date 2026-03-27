#ifndef STUDENTS_H_
#define STUDENTS_H_

#include <map>
#include "student.h"
#include <string>
#include <iostream>

class students {
private:
    std::map<int, student> m_students;

public:
    void add_student(int id, std::string name, double gpa);
    void remove_student(int id);
    student search(int id);
    void display_all();
};

#endif // !STUDENTS_H_
