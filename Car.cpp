#include <iostream>
#include <string>

using namespace std;

#include "Car.h"
#include "Vehicle.h"

Car::Car(string manufacturer, int yearBuilt, int n) : numDoors(n), Vehicle(manufacturer, yearBuilt)
{
}

// Getters and setters

int Car::getNumDoors()
{
    return numDoors;
}
void Car::setNumDoors(int numDoors)
{
    this->numDoors = numDoors;
}

void Car::displayInfo()
{
    cout << "\nVehicle Information:\n";
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Year Built:   " << getYearBuilt() << endl;
    cout << "Doors:   " << numDoors << endl;
}