// car.h
#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    std::string color;
    double mileage;
    bool isEngineRunning;

public:
    // Constructor
    Car(std::string make, std::string model, int year, std::string color);

    // Destructor (simple, for demonstration)
    ~Car();

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    std::string getColor() const;
    double getMileage() const;
    bool getIsEngineRunning() const;
};

#endif // CAR_H

// car.cpp (implementation file for Car class)
#include "car.h"

Car::Car(std::string make, std::string model, int year, std::string color)
    : make(make), model(model), year(year), color(color), mileage(0.0), isEngineRunning(false) {
    std::cout << "Car object created: " << this->year << " " << this->make << " " << this->model << std::endl;
}

Car::~Car() {
    std::cout << "Car object destroyed: " << this->year << " " << this->make << " " << this->model << std::endl;
}

std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

std::string Car::getColor() const {
    return color;
}

double Car::getMileage() const {
    return mileage;
}

bool Car::getIsEngineRunning() const {
    return isEngineRunning;
}