
#ifndef COURSE_H_
#define COURSE_H_

#include <string>
#include <vector>

class Course {
private:
    std::string m_courseName;
    int m_courseId;

public:
    Course(int id, std::string name);
    std::string get_name();
    int get_id();
};

#endif // !COURSE_H_
