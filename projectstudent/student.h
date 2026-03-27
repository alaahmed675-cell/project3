#ifndef STUDENT_H_
#define STUDENT_H_

#include "person.h"

class student : public person {
private:
    int m_id;
    double m_gpa;

public:
    student() { m_id = -1; m_gpa = 0.0; } // أضيفي هذا السطر بالظبط
    student(int id, std::string name);
    void set_gpa(double gpa);
    double get_gpa();
    std::pair<int, std::string> get_info();
};

#endif // !STUDENT_H_
