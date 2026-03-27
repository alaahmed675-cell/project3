#include "students.h"
#include <iostream> 

void students::add_student(int id, std::string name, double gpa) {
    student s(id, name); 
    s.set_gpa(gpa);      
    m_students.insert(std::make_pair(id, s));
    std::cout << "Student added successfully!" << std::endl;
}

void students::remove_student(int id) {
    
    if (m_students.erase(id)) {
        std::cout << "Student with ID " << id << " has been removed." << std::endl;
    }
    else {
        std::cout << "Error: Student ID not found!" << std::endl;
    }
}

student students::search(int id) {
    
    if (m_students.count(id)) {
        student s = m_students[id];
        std::cout << "Student Found: " << s.get_info().second << " | GPA: " << s.get_gpa() << std::endl;
        return s;
    }
    std::cout << "Student not found!" << std::endl;
    return student(); 
}

void students::display_all() {
    if (m_students.empty()) {
        std::cout << "The list is empty." << std::endl;
        return;
    }
    for (auto& m_student : m_students)
    {
        std::cout << "Student ID is " << m_student.second.get_info().first <<
            " | Name is " << m_student.second.get_info().second <<
            " | GPA is " << m_student.second.get_gpa() << std::endl;
    }
}
