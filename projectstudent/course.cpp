#include "course.h"


Course::Course(int id, std::string name) {
    m_courseId = id;
    m_courseName = name;
}


std::string Course::get_name() {
    return m_courseName;
}


int Course::get_id() {
    return m_courseId;
}