#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class Person
{
    protected:
        string name;
        int age;
        string gender;
        string address;
        string phoneNumber;
        string email;
        int id;

public:
    Person()
    {
    }

    ~Person()
    {
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setGender(string gender)
    {
        this->  gender = gender;
   }
   
    void setAddress(string address)
    {
        this->address = address;
    }

    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    void setEmail(string email)
    {
        this->email = email;
    }
    void setId(int id)
    {
        this->id = id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;   
    }
    int getId()
    {
        return id;
    }
    void print()
    {
        cout << "Enter a name: "<< endl;
          cin >> name  ;
        cout << "Enter an age: "<< endl;
         cin >> age  ;
        cout << "Enter a gender: " << endl;
         cin >> gender ;
        cout << "Enter an address: "<< endl;
         cin >> address ;
        cout << "Enter a phone number: "<< endl;
         cin >> phoneNumber ;
        cout << "Enter an email: "<< endl;
         cin >> email ;
        cout << "Enter an ID: "<< endl;
         cin >> id ;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }
};

#endif
