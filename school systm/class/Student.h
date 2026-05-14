#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;
#pragma once

class Student : public Person
{
    private:
        
        string major;
        float gpa;
public:
    Student()
    {
    }
    ~Student()
    {
    }
   
    void setMajor(string major)
    {
        this->major = major;
    }
    void setGpa(float gpa)
    {
        this->gpa = gpa;
    }
   
    string getMajor()
    {
        return major;
    }
    float getGpa()
    {
        return gpa;
    }
    void print()
    {
            Person::print();
        cout << "Enter a Major: " << endl;
        cin >> major;
        cout << "Enter a GPA: " << endl;
        cin >> gpa;
    }
    
    void display()
    {
        Person::display();
        cout << "Major: " << major << endl;
        cout << "GPA: " << gpa << endl;
    }

};

#endif