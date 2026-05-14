#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <iostream>
using namespace std;
#pragma once

class Teacher: public Person
{
    private:
            string subject;
            float salary;
public:
    Teacher()
    {
    }
    ~Teacher()
    {
    }
    void setSubject(string subject)
    {
        this->subject = subject;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {        Person::print();
        cout << "Enter a Subject Specialization: " << endl;
        cin >> subject;
        cout << "Enter a Salary: " << endl;
        cin >> salary;
    }
    
    void display()
    {
        Person::display();
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }



};

#endif