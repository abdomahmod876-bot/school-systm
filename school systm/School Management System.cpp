#include "class/Person.h"
#include "class/Student.h"
#include "class/Teacher.h"
#include "class/Staff.h"
#include "class/Course.h"
#include "class/Classroom.h"
#include "class/Exam.h"
#include "class/School.h"
#include <iostream>
using namespace std;
int main() 
{
 cout << "Welcome to the School Management System" << endl; 
 School school1;
 school1.print();
 int menu = -1;

while(menu != 0)
{
    cout << "\n===== School Management System =====\n";
    cout << "1. Add Student\n";
    cout << "2. Add Teacher\n";
    cout << "3. Add Staff\n";
    cout << "4. Add Course\n";
    cout << "5. Add Classroom\n";
    cout << "6. View Data\n";
    cout << "7. Add Exam\n";
    cout << "0. Exit\n";

    cin >> menu;

    if(menu == 1)
    {
        Student s1;
        school1.addStudent(s1);
    }
    else if(menu == 2)
    {
        Teacher t1;
        school1.addTeacher(t1);
    }
    else if(menu == 3)
    {
        Staff s1;
        school1.addStaff(s1);
    }
    else if(menu == 4)
    {
        Course c1;
        school1.addCourse(c1);
    }
    else if(menu == 5)
    {
        Classroom cr1;
        school1.addClassroom(cr1);
    }
    else if(menu == 6)
    {
       int viewMenu = -1;
       while(viewMenu != 0)
{
        cout << "\n===== View Data =====\n";
        cout << "1. View Students\n";
        cout << "2. View Teachers\n";
        cout << "3. View Staff\n";
        cout << "4. View Courses\n";
        cout << "5. View Classrooms\n";
        cout << "0. Back to Main Menu\n";
        cin >> viewMenu;
        if(viewMenu == 1)
        {
            cout << "\n----- Students -----\n";
             school1.showStudents() ;
        }
        else if(viewMenu == 2)
        {
            cout << "\n----- Teachers -----\n";
             school1.showTeachers() ;
        }
        else if(viewMenu == 3)
        {
            cout << "\n----- Staff -----\n";
             school1.showStaff() ;
        }
        else if(viewMenu == 4)
        {
            cout << "\n----- Courses -----\n";
             school1.showCourses() ;
        }
        else if(viewMenu == 5)
        {
            cout << "\n----- Classrooms -----\n";
             school1.showClassrooms() ;
        }   
    }
 }
  else if (menu == 7)
  {
    Exam e1;
    e1.print();
  }

}
    return 0;
}
