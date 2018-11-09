// Assignment 4, Problem 2: Car.cpp
// Car Class, Member Functions Definition
#include "Car.h"

using namespace std;

// contructor initializes car attribute
Car::Car( int carId, string carBrand, string carType )
	: id( carId ), brand( carBrand ), type( carType )
{
}

// function returns the car id
int Car::getId()
{
	return id;
} // end getCar

// function returns th car brand
string Car::getBrand()
{
	return brand;
} // end getBrand

// function returns the car type
string Car::getType()
{
	return type;
} // end getType