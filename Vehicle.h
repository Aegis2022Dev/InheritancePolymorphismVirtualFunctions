#ifndef VEHICLE_H
#define VEHICLE_H

//Create and define the Vehcile class

class Vehicle
{
public:
    //constructor
    Vehicle(string manufacturer, int yearBuilt);

    //Getters and setters

    string getManufacturer();
    void setManufacturer(string manufacturer);

    int getYearBuilt();
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo(); //declare dynamically allocated method for dervied classes

private:
    string manufacturer;
    int yearBuilt;

}; //End Vehicle class
#endif