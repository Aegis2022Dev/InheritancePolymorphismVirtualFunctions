#ifndef CAR_CPP
#define CAR_CPP

#include "Car.h"
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;

Car::Car(string manufacturer, int yearBuilt, int n) : numDoors(n), Vehicle(manufacturer, yearBuilt)
{
}

//Getters and setters

int Car::getNumDoors()
{
    return numDoors;
}

void Car::setNumDoors(int numDoors)
{
    this->numDoors = numDoors;
}

void Car::displayInfo() //Inherited Car class overrides the base class virtual displayInfo() method
{
    cout << "\nVehicle Information:\n";
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Year Built:   " << getYearBuilt() << endl;
    cout << "Doors:   " << numDoors << endl;
}

#endif