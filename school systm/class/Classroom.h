#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;
#pragma once

class Classroom
{
    private:
        int roomNumber;
        int capacity;
public:
    Classroom()
    {
    }
    ~Classroom()
    {
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber = roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }

    int getCapacity()
    {
        return capacity;
    }
    void print()
    {
        cout << "Enter a Room Number: " << endl;
        cin >> roomNumber;
        cout << "Enter a Capacity: " << endl;
        cin >> capacity;
    }
    
    void display()
    {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Capacity: " << capacity << endl;
    }



};

#endif