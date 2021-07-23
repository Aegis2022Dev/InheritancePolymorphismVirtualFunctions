#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Car : public Vehicle
{
private:
    int numDoors;

public:
    Car(string manufacturer, int yearBuilt, int numDoors);
    //getters and setters
    int getNumDoors();
    void setNumDoors(int numDoors);
    void displayInfo();
};


#endif
