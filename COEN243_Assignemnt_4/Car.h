// Assignment 4, Problem 2: Car.h
// Car Class Definition
#include <string>

class Car
{
public:
	Car( int, std::string, std::string );

	int getId();
	std::string getBrand();
	std::string getType();
private:
	int id;
	std::string brand;
	std::string type;
};