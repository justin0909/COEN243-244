// Assignment 4, Problem 1: Flight.cpp
// Flight Class, Member Functions Definition
#include "Flight.h"

using namespace std;

// constructor initializes variables to values given as input
Flight::Flight( int number, std::string time, std::string date,  std::string departCity,  std::string destCity )
	: flightNumber( number ), departureTime( time ), departureDate( date ), departureCity( departCity ), destinationCity( destCity )
{ 
}

// returns the flight number
int Flight::getFlightNumber()
{
	return flightNumber;
} // end getFlightNumber

// returns the departure time
string Flight::getDepartureTime()
{
	return departureTime;
} // end getDepartureTime

// returns the departure date
string Flight::getDepartureDate()
{
	return departureDate;
} // end getDepartureDate

// updates the departure time
void Flight::changeDepartureTime( string time )
{
	departureTime = time;
} // end changeDepartureTime

// updates the departure date
void Flight::changeDepartureDate( string date )
{
	departureDate = date;
} // end changeDepartureDate

// returns the departure city
string Flight::getDepartureCity()
{
	return departureCity;
} // end getDepartureCity

// returns the destination city
string Flight::getDestinationCity()
{
	return destinationCity;
} // end getDestintationCity