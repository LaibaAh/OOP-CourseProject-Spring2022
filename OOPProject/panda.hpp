#include <iostream>

using namespace std;
// this is a prototype file for the implementation of panda (player) using Singleton Design Pattern

class Panda
{
    static Panda *instance; // creates the object as a data member
    int data;               // more data members to be added according to UML Diagram
    Panda()
    {
        data = 0;
    } // here we have made the constructor private such that no objects of this type can be created

public:
    static Panda *getinstance();
    int getData();
    void setData(int data);
};
