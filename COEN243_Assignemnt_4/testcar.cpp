// Assignemnt 4, problem 2: testcar.cpp
// The driver for the Car class
#include "Car.h"
#include <iostream>

using namespace std;

int main()
{
	// initialize temporary variable
	int carId;
	string carBrand;
	string carType;

	// prompt user for information on car 1, and store values in temporary variables
	cout << "\nPlease enter the information for Car 1:\n";
	cout << "Car id: ";
	cin >> carId;
	cout << "Brand: ";
	cin.ignore(1000,'\n'); // ignore any of the firsts 1000 characters in the buffer up to and including the new line character
	getline(cin,carBrand);
	cout << "Car Type: ";
	getline(cin,carType);
	cout << endl;
	// instantiate class flight1 with user's information
	Car car1( carId, carBrand, carType );

	// prompt user for information on car 2, and store values in temporary variables
	cout << "\nPlease enter the information for Car 2:\n";
	cout << "Car ID: ";
	cin >> carId;
	cout << "Brand: ";
	cin.ignore(1000,'\n'); // ignore any of the firsts 1000 characters in the buffer up to and including the new line character
	getline(cin,carBrand);
	cout << "Car Type: ";
	getline(cin,carType);
	cout << endl;
	// instantiate class flight1 with user's information
	Car car2( carId, carBrand, carType );

	// Display both Cars' information
	cout << "Car 1" << endl;
	cout << "ID: " << car1.getId() << endl;
	cout << "Brand: " << car1.getBrand() << endl;
	cout << "Type: " << car1.getType() << endl;

	cout << "\n\nCar 1" << endl;
	cout << "ID: " << car2.getId() << endl;
	cout << "Brand: " << car2.getBrand() << endl;
	cout << "Type: " << car2.getType() << endl;

	return 0;
}