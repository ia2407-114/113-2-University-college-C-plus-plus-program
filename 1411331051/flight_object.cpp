#include <iostream>
#include "flight_object.h"
using namespace std;

// --- flight_object ---
flight_object::flight_object() {
    cout << "Base class flight_object constructor called.\n";
    cout << "Enter aircraft info:\n";
    cout << "Name: "; cin >> name;
    cout << "ID: "; cin >> id;
    cout << "Number of pilots: "; cin >> pilot;
    cout << "Kerosene amount (liters): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "Base class flight_object destructor called.\n";
}

void flight_object::display() {
    cout << "\nAircraft name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Number of pilots: " << pilot << endl;
    cout << "Kerosene amount (liters): " << kerosene << endl;
}

// --- airliner ---
airliner::airliner() {
    cout << "\nAirliner subclass constructor called.\n";
    cout << "Number of passengers: "; cin >> passenger;
    cout << "Number of service personnel: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "Airliner subclass destructor called.\n";
}

void airliner::display_airliner() {
    cout << "Number of passengers: " << passenger << endl;
    cout << "Number of service personnel: " << service_person << endl;
}

// --- cargo ---
cargo::cargo() {
    cout << "\nCargo subclass constructor called.\n";
    cout << "Leasing company: "; cin >> company;
    cout << "Max load (kg): "; cin >> max_load;
}

cargo::~cargo() {
    cout << "Cargo subclass destructor called.\n";
}

void cargo::display_cargo() {
    cout << "Leasing company: " << company << endl;
    cout << "Max load (kg): " << max_load << endl;
}
