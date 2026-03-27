
#ifndef COURSES_H_
#define COURSES_H_

#include <vector>
#include "course.h"
#include <iostream>

class courses {
private:
    std::vector<Course> m_allCourses;

public:
    void add_new_course(int id, std::string name);
    void display_available_courses();
    Course find_course_by_id(int id);
};

#endif // !COURSES_H_
