#include <iostream>
#include <string>
#include "students.h"
#include "courses.h"

using namespace std;

void show_menu() {
    cout << "\n--- Student Course Management System ---" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Remove Student" << endl;
    cout << "3. Search Student" << endl;
    cout << "4. Display All Students" << endl;
    cout << "5. Add New Course to System" << endl;
    cout << "6. Display All Courses" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    students studentManager; // المخزن الخاص بالطلاب
    courses courseManager;   // المخزن الخاص بالكورسات
    int choice;

    while (true) {
        show_menu();
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting program..." << endl;
            break;
        }

        switch (choice) {
        case 1: {
            int id;
            string name;
            double gpa;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter GPA: "; cin >> gpa;

            studentManager.add_student(id, name, gpa); 
            break;
        }
        case 2: {
            int id;
            cout << "Enter Student ID to remove: "; cin >> id;
            studentManager.remove_student(id);
            cout << "Student removed (if existed)." << endl;
            break;
        }
        case 3: {
            int id;
            cout << "Enter Student ID to search: "; cin >> id;
            student s = studentManager.search(id);
            if (s.get_info().first != -1) {
                cout << "Found -> Name: " << s.get_info().second << ", GPA: " << s.get_gpa() << endl;
            }
            else {
                cout << "Student not found!" << endl;
            }
            break;
        }
        case 4:
            studentManager.display_all();
            break;
        case 5: {
            int c_id;
            string c_name;
            cout << "Enter Course ID: "; cin >> c_id;
            cout << "Enter Course Name: "; cin.ignore(); getline(cin, c_name);
            courseManager.add_new_course(c_id, c_name);
            cout << "Course added to system!" << endl;
            break;
        }
        case 6:
            courseManager.display_available_courses();
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}
