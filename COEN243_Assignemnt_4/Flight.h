// Assignment 4, Problem 1: Flight.h
// Flight Class Definition
#include <string>

// Flight class definition
class Flight{
public:
	// Constructor initializes flight number, departure time, departure date, departure city and destination city
	Flight( int, std::string, std::string,  std::string,  std::string );

	int getFlightNumber();
	std::string getDepartureTime();
	std::string getDepartureDate();
	void changeDepartureTime( std::string newDepartureTime );
	void changeDepartureDate( std::string newDepartureDate );
	std::string getDepartureCity();
	std::string getDestinationCity();
private:
	int flightNumber;
	std::string departureTime;
	std::string departureDate;
	std::string departureCity;
	std::string destinationCity;
};