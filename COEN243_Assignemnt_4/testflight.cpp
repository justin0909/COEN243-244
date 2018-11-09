// Assignemnt 4, problem 1: testflight.cpp
// The driver for the Flight class
#include "Flight.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// initialize temporary variable
	int flightNumber;
	string flightDepartureTime;
	string flightDepartureDate;
	string flightDepartureCity;
	string flightDestinationCity;

	// prompt user for information on flight 1, and store values in temporary variables
	cout << "\nPlease enter the information for Flight 1:\n";
	cout << "Flight number: ";
	cin >> flightNumber;
	cout << "Departue time (hh:mm): ";
	cin >> flightDepartureTime;
	cout << "Departure date (dd/mm/yyyy): ";
	cin >> flightDepartureDate;
	cout << "Departure city: ";
	cin.ignore(1000,'\n'); // ignore any of the firsts 1000 characters in the buffer up to and including the new line character
	getline (cin,flightDepartureCity);
	cout << "Destination city: ";
	getline (cin,flightDestinationCity);
	cout << endl;
	// instantiate class flight1 with user's information
	Flight flight1( flightNumber, flightDepartureTime , flightDepartureDate, flightDepartureCity, flightDestinationCity );

	// prompt user for information on flight 2, and store values in temporary variables
	cout << "Please enter the information for Flight 2:\n";
	cout << "Flight number: ";
	cin >> flightNumber;
	cout << "Departue time (hh:mm): ";
	cin >> flightDepartureTime;
	cout << "Departure date (dd/mm/yyyy): ";
	cin >> flightDepartureDate;
	cout << "Departure city: ";
	cin.ignore(1000,'\n'); // ignore any of the firsts 1000 characters in the buffer up to and including the new line character
	getline (cin,flightDepartureCity);
	cout << "Destination city: ";
	getline (cin,flightDestinationCity);
	cout << endl;
	// instantiate class flight1 with user's information
	Flight flight2( flightNumber, flightDepartureTime , flightDepartureDate, flightDepartureCity, flightDestinationCity );

	// Display both flights' information
	cout << "The flight information you have entered:" << endl;
	cout << "Flight 1" << endl;
	cout << "Flight number: " << flight1.getFlightNumber() << endl;
	cout << "Departue time: " << flight1.getDepartureTime() << endl;
	cout << "Departure date: " << flight1.getDepartureDate() << endl;
	cout << "Departure city: " << flight1.getDepartureCity() << endl;
	cout << "Destination city: " << flight1.getDestinationCity() << endl;

	// Display both flights' information
	cout << "\n\nFlight 2" << endl;
	cout << "Flight number: " << flight2.getFlightNumber() << endl;
	cout << "Departue time: " << flight2.getDepartureTime() << endl;
	cout << "Departure date: " << flight2.getDepartureDate() << endl;
	cout << "Departure city: " << flight2.getDepartureCity() << endl;
	cout << "Destination city: " << flight2.getDestinationCity() << endl;

	// Prompt the user to change flight1's infrmation
	string change;
	cout << "\nTesting changeDepartureTime() and changeDepartureDate() member functions..." << endl;
	cout << "Would you like to change the departure schedule of Flight 1? (Y/N): ";
	cin >> change;

	if( change == "Y" )
	{
		cout << "Please enter the new information for Flight 1:\n";
		cout << "Departue time (hh:mm): ";
		cin >> flightDepartureTime;
		cout << "Departure date (dd/mm/yyyy): ";
		cin >> flightDepartureDate;
		cout << endl;

		flight1.changeDepartureTime( flightDepartureTime );
		flight1.changeDepartureDate( flightDepartureDate );

		// Display th changes
		// Display both flights' information
		cout << "Flight 1 with new departure schedule" << endl;
		cout << "Flight number: " << flight2.getFlightNumber() << endl;
		cout << "Departue time: " << flight2.getDepartureTime() << endl;
		cout << "Departure date: " << flight2.getDepartureDate() << endl;
		cout << "Departure city: " << flight2.getDepartureCity() << endl;
		cout << "Destination city: " << flight2.getDestinationCity() << endl;
	}
	

	return 0;
}