#include "Airplane.h"

Airplane::Airplane(int flightNumber, const string& departureAirport, const string& arrivalAirport, const string& model, int totalSeats)
{
    this->flightNumber = flightNumber;
    this->departureAirport = departureAirport;
    this->arrivalAirport = arrivalAirport;
    this->model = model;
    this->totalSeats = totalSeats;
    this->availableSeats = totalSeats;
}

int Airplane::getFlightNumber() const
{
    return flightNumber;
}

void Airplane::setFlightNumber(int flightNumber)
{
    this->flightNumber = flightNumber;
}

string Airplane::getDepartureAirport() const
{
    return departureAirport;
}

void Airplane::setDepartureAirport(const string& departureAirport)
{
    this->departureAirport = departureAirport;
}

string Airplane::getArrivalAirport() const
{
    return arrivalAirport;
}

void Airplane::setArrivalAirport(const string& arrivalAirport)
{
    this->arrivalAirport;
}

string Airplane::getModel() const
{
    return model;
}

void Airplane::setModel(const string& model)
{
    this->model = model;
}

int Airplane::getTotalSeats() const
{
    return totalSeats;
}

void Airplane::setTotalSeats(int totalSeats)
{
    this->totalSeats = totalSeats;
}

int Airplane::getAvailableSeats() const
{
    return availableSeats;
}

void Airplane::setAvailableSeats(int availableSeats)
{
    this->availableSeats = availableSeats;
}

void Airplane::addPassenger(const string& passengerName)
{
    if (availableSeats > 0) {
        passengers.push_back(passengerName);
        availableSeats--;
    }
    else {
        cout << "No available seats on this flight" << endl;
    }
}

void Airplane::removePassenger(const string& passengerName)
{
    for (auto it = passengers.begin(); it != passengers.end(); ++it) {
        if (*it == passengerName) {
            passengers.erase(it);
            availableSeats++;
            return;
        }
    }
    cout << "Passenger not found on this flight" << endl;
}

void Airplane::sellTicket(const string& passengerName)
{
    addPassenger(passengerName);
}

void Airplane::refundTicket(const string& passengerName)
{
    removePassenger(passengerName);
}

void Airplane::printAirplaneInfo()
{
    cout << "Flight Number: " << flightNumber << endl;
    cout << "Departure Airport: " << departureAirport << endl;
    cout << "Arrival Airport: " << arrivalAirport << endl;
    cout << "Model: " << model << endl;
    cout << "Total Seats: " << totalSeats << endl;
    cout << "Available Seats: " << availableSeats << endl;
    cout << "Passengers: " << endl;
    for (const string& passenger : passengers) {
        cout << "- " << passenger << endl << endl;
    }
}
