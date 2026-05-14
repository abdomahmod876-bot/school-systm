#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
#pragma once

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course()
    {
    }
    ~Course()
    {
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }
    void setTeacherName(string teacherName)
    {
        this->teacherName = teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName; 
    }
    void print()
    {
        cout << "Enter a Course Code: " << endl;
        cin >> courseCode;
        cout << "Enter a Course Name: " << endl;
        cin >> courseName;
        cout << "Enter a Teacher Name: " << endl;
        cin >> teacherName;
    }
    
    void display()
    {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Teacher Name: " << teacherName << endl;
    }



};

#endif