#include <iostream>
#include <string>

using namespace std;

#include "Truck.h"
#include "Car.h"
#include "Vehicle.h"

Truck::Truck(string m, int y, int t):towing_capacity(t), Vehicle(m, y)
{
}

//Getters and setters

int Truck::getTowing_capacity()
{
    return towing_capacity;
}

void Truck::setTowing_capacity(int t)
{
    this->towing_capacity = t;
}

void Truck::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Towing capacity:   " << towing_capacity << endl;
}
