//cpp
#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <string>
using namespace std;

// Aircraft class
class FlightObject {
private:
    string name;      // Name of the aircraft
    int id;           // Aircraft ID
    int pilot;        // Number of pilots
    float kerosene;   // Amount of kerosene (fuel used by the aircraft)

public:
    // Constructor and Destructor for FlightObject class
    FlightObject();
    virtual ~FlightObject();

    // Display the aircraft's data
    virtual void display() const;
};

// Airliner class (inherits from FlightObject)
class Airliner : public FlightObject {
private:
    int passenger;        // Number of passengers
    int service_person;   // Number of service staff

public:
    // Constructor and Destructor for Airliner class
    Airliner();
    virtual ~Airliner();

    // Display the airliner's data
    void display_airliner() const;
};

// Cargo class (inherits from FlightObject)
class Cargo : public FlightObject {
private:
    string lessee;          // Lessee of the cargo plane
    float max_load;         // Maximum load capacity in kg

public:
    // Constructor and Destructor for Cargo class
    Cargo();
    virtual ~Cargo();

    // Display the cargo plane's data
    void display_cargo() const;
};

#endif // FLIGHT_OBJECT_H
