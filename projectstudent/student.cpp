#include "student.h"

student::student(int id, std::string name) {
    m_id = id;
    m_name = name;
    m_gpa = 0;
}
void student::set_gpa(double gpa) {
    m_gpa = gpa;
}
double student::get_gpa() {
    return m_gpa;
}
std::pair<int, std::string> student::get_info() {
    return std::make_pair(m_id, m_name);
}