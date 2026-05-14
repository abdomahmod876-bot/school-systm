#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;
#pragma once

class Exam
{
private:
    string examName;
    string courseCode;
    string date;
public:
    Exam()
    {
    }
    ~Exam()
    {
    }
    void setExamName(string examName)
    {
        this->examName = examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }
    void setDate(string date)
    {
        this->date = date;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getDate()
    {
        return date;
    }
    void print()
    {
        cout << "Enter an Exam Name: " << endl;
        cin >> examName;
        cout << "Enter a Course Code: " << endl;
        cin >> courseCode;
        cout << "Enter a Exam Date: " << endl;
        cin >> date;
    }
    
    void display()
    {
        cout << "Exam Name: " << examName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Date: " << date << endl;
    }



};

#endif