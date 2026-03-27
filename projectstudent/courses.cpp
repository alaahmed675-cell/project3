#include "courses.h"

void courses::add_new_course(int id, std::string name) {
    Course newCourse(id, name);
    m_allCourses.push_back(newCourse);
}
void courses::display_available_courses() {
    for (auto& c : m_allCourses) {
        std::cout << "Course ID: " << c.get_id()
            << " Course Name: " << c.get_name() << std::endl;
    }
}

Course courses::find_course_by_id(int id) {
    for (auto& c : m_allCourses) {


        if (c.get_id() == id) {


            return c;
        }
    }

    return Course(-1, "Not Found");
}