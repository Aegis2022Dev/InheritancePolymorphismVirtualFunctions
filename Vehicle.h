#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;
class Vehicle
{
private:  //shows encapsulation
    string manufacturer;
    int yearBuilt;

public:
    //Constructor definition
    Vehicle(string manufacturer, int yearBuilt);

    //getters and setters
    string getManufacturer();
    void setManufacturer(string manufacturer);

    int getYearBuilt();
    void setYearBuilt(int yearBuilt);

    virtual void displayInfo(); //dynamic method assignment
};

#endif
