/*
* Joy Morrison
* CIS 1202
* 07/22/2021
*
* Week 11 – Inheritance, Polymorphism & Virtual Functions
*
* Program defines a base super class called Vehicle
* Program demonstrates Inheritance and polymorphism by creating a child class called Car
* Program demonstrates Inheritance and polymorphism by creating a child car of Class called Truck
* Program will display information about the classes using the displayInfo() method
* Program will define and utilize appropriate contructors, getters and setters
* Program creates a driver program called VehicleDriver.cpp to test the base and inherited classes
* Program uses GitHub source management tool to commit modular source code updates to the master 
*
* Methods:
* displayInfo() displays information about the base vehicle and inherited Car/Truck classes
* Note: Method displayInfo() shows dyanmic polymorphism when called by different classes
* 
* VIP NOTE: The publication.txt file currently has 6 publications. No data validation is
* provided to check user input of a size exceeding this current array length.
* The program will print null/zeros for any array data sizes > 6
*/

#include <iostream> // allow use of cout/cin data stream objects
#include <algorithm> //allow copying of arrays
#include <fstream> // to enable input/output field handlers
#include <iomanip> // to allow field formatting using setprecision, setw etc.
#include <cstring>  // allow use of cstring library 
#include <cctype> // allow use of isalpha, isdigit and other native boolean char/integer methods
#include <ctime> // to make rand() generator dynamic
#include <string>  // allow use of STRING library to use methods like getline()
#include <cstdlib> //permit use of basic utility and math fx like transform()
#include <cmath> // allow use of math library where necessary
#include <cstdbool> // allow use of boolean data structures where necessary
#include <cctype> //allow use of isdigit(arg) and other native boolean alphanumeric/char methods

using namespace std;

#include "Vehicle.h"

//DECLARE FORWARD DECLARATIONS, METHOD & STRUCTURES DEFINITIONS FOR FUNCTION PROTOTYPES


/****BEGIN main() METHOD****/

int main()
{
    string manufac;
    int year;
    int numDoor;
    int cap;

    cout << "Vehicle program " << endl;

    cout << "\nVehicle:\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufac);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore(); //necessary due to change in user input data type

    Vehicle v(manufac, year);
    v.displayInfo(); //call the dynamically bound virtual displayInfo() method for the vehicle superclass



	system("pause");
	return 0;

}// End main()
