#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car:public Vehicle //Derived class Car inheriting from superclass Vehicle
{
private:
    int numDoors;

public:
    Car(string manufacturer, int yearBuilt, int numDoors);
   
    //Getters and setters

    int getNumDoors();
    void setNumDoors(int numDoors);
    void displayInfo();
};

#endif