#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Airplane {
private:
    int flightNumber;
    string departureAirport;
    string arrivalAirport;
    string model;
    int totalSeats;
    int availableSeats;
    vector<string> passengers;

public:
    Airplane(int flightNumber, const string& departureAirport, const string& arrivalAirport, const string& model, int totalSeats);

    int getFlightNumber() const;
    void setFlightNumber(int flightNumber);

    string getDepartureAirport() const;
    void setDepartureAirport(const string& departureAirport);

    string getArrivalAirport() const;
    void setArrivalAirport(const string& arrivalAirport);

    string getModel() const;
    void setModel(const string& model);

    int getTotalSeats() const;
    void setTotalSeats(int totalSeats);

    int getAvailableSeats() const;
    void setAvailableSeats(int availableSeats);

    void addPassenger(const string& passengerName);
    void removePassenger(const string& passengerName);

    void printAirplaneInfo();
};
