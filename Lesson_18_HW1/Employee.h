#pragma once
#include<iostream>
#include<cstring>
using namespace std;

struct Employee
{
    char name[100] = " ";
    int age = 0;
    char position[100] = " ";
    int salary = 0;
    char education[100] = " ";

    void showInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
        cout << "Education: " << education << endl;
    }
};