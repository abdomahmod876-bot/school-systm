#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
#include <iostream>
using namespace std;
#pragma once

class Staff: public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {
    }
    ~Staff()
    {
    }
    void setRole(string role)   
    {
        this->role = role;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {        Person::print();
        cout << "Enter a Role: " << endl;
        cin >> role;
        cout << "Enter a Salary: " << endl;
        cin >> salary;
    }
    
    void display()
    {
        Person::display();
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
    }



};

#endif