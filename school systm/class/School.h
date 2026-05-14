#ifndef SCHOOL_H
#define SCHOOL_H
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"
#include <iostream>
#include <vector>
using namespace std;
#pragma once

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Staff> staffMembers;
    vector<Course> courses;
    vector<Classroom> classrooms;

public:
    School()
    {
    }
    ~School()
    {
    }
    void setSchoolName(string schoolName)
    {
        this->schoolName = schoolName;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setPrincipalName(string principalName)
    {
        this->principalName = principalName;
    }
    void setStudents(vector<Student> students)
    {
        this->students = students;
    }
    void setTeachers(vector<Teacher> teachers)
    {
        this->teachers = teachers;
    }
    void setStaffMembers(vector<Staff> staffMembers)
    {
        this->staffMembers = staffMembers;
    }
    void setCourses(vector<Course> courses)
    {
        this->courses = courses;
    }
    void setClassrooms(vector<Classroom> classrooms)
    {
        this->classrooms = classrooms;
    }
    string getSchoolName()
    {
        return schoolName;
    }
    string getAddress()
    {
        return address;
    }
    string getPrincipalName()
    {
        return principalName;
    }
    vector<Student> getStudents()
    {
        return students;
    }
    vector<Teacher> getTeachers()
    {
        return teachers;
    }
    vector<Staff> getStaffMembers()
    {
        return staffMembers;
    }
    vector<Course> getCourses()
    {
        return courses;
    }
    vector<Classroom> getClassrooms()
    {   
        return classrooms;
    } 
    void addStudent(Student s)
{
    
    s.print();
    students.push_back(s);
}
void addTeacher(Teacher t)
{
    ;
    t.print();
    teachers.push_back(t);
}
void addStaff(Staff s)
{
    s.print();
    staffMembers.push_back(s);
}
void addCourse(Course c)
{
    
    c.print();
    courses.push_back(c);
}
void addClassroom(Classroom cr)
{
    
    cr.print();
    classrooms.push_back(cr);
}

    void print()
    {
        cout << "Enter School Name: " << endl;
        cin >> schoolName;
        cout << "Enter School Address: " << endl;
        cin >> address;
        cout << "Enter Principal Name: " << endl;
        cin >> principalName;
    }

    void showData()
    {
        cout << "\n===== School Information =====\n";
        cout << "School Name: " << schoolName << endl;
        cout << "Address: " << address << endl;
        cout << "Principal Name: " << principalName << endl;

      
        
    }
    void showStudents()
    {
        for(int i = 0; i < students.size(); i++)
        {
              students[i].display();
        }
    }
     void showTeachers()
     {
          for(int i = 0; i < teachers.size(); i++)
          {
                  teachers[i].display();
          }
     }
     void showStaff()
     {
          for(int i = 0; i < staffMembers.size(); i++)
          {
                  staffMembers[i].display();
          }
     }
     void showCourses()
     {
          for(int i = 0; i < courses.size(); i++)
          {
                  courses[i].display();
          }
     }
     void showClassrooms()
     {
          for(int i = 0; i < classrooms.size(); i++)
          {
                  classrooms[i].display();
          }
     }

};

#endif