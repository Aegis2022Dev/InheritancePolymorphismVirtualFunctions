#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

//getters and setters
string Vehicle::getManufacturer()
{
    return manufacturer;
}

void Vehicle::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt()
{
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
    this->yearBuilt = yearBuilt;
}

//this dynamically bound, virtual method of the base vehicle class will be overriden 
//when inherited by all derived classess that utilize it
void Vehicle::displayInfo()
{
    cout << "\nVehicle Information:\n";
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built:   " << yearBuilt << endl;
}

#endif