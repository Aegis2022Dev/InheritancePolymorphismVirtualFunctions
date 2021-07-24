#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    int towing_capacity;

public:
    Truck(string manufacturer, int yearBuilt, int towing_capacity);
   
    //Getters and setters

    int getTowing_capacity();
    void setTowing_capacity(int numDoors);

    void displayInfo();
};

#endif
