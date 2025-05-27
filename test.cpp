#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    std::string color;
    double mileage;
    bool isEngineRunning;

public:
    Car(std::string carMake, std::string carModel, int carYear, std::string carColor)
        : make(carMake), model(carModel), year(carYear), color(carColor),
          mileage(0.0), isEngineRunning(false) {
        std::cout << "Car object created: " << this->year << " "
                  << this->make << " " << this->model << std::endl;
    }

    ~Car() {
        std::cout << "Car object destroyed: " << this->year << " "
                  << this->make << " " << this->model << std::endl;
    }

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }
    std::string getColor() const { return color; }
    double getMileage() const { return mileage; }
    bool getIsEngineRunning() const { return isEngineRunning; }
};
#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    std::string color;
    double mileage;
    bool isEngineRunning;

public:
    Car(std::string carMake, std::string carModel, int carYear, std::string carColor)
        : make(carMake), model(carModel), year(carYear), color(carColor),
          mileage(0.0), isEngineRunning(false) {
        std::cout << "Car object created: " << this->year << " "
                  << this->make << " " << this->model << std::endl;
    }

    ~Car() {
        std::cout << "Car object destroyed: " << this->year << " "
                  << this->make << " " << this->model << std::endl;
    }

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }
    std::string getColor() const { return color; }
    double getMileage() const { return mileage; }
    bool getIsEngineRunning() const { return isEngineRunning; }

    void setColor(std::string newColor) {
        this->color = newColor;
        std::cout << "Car color changed to: " << this->color << std::endl;
    }

    void startEngine() {
        if (!isEngineRunning) {
            isEngineRunning = true;
            std::cout << "Engine started for " << make << " " << model << std::endl;
        } else {
            std::cout << "Engine is already running for " << make << " " << model << std::endl;
        }
    }

    void stopEngine() {
        if (isEngineRunning) {
            isEngineRunning = false;
            std::cout << "Engine stopped for " << make << " " << model << std::endl;
        } else {
            std::cout << "Engine is already off for " << make << " " << model << std::endl;
        }
    }
};