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
          mileage(0.0), isEngi9999999699+neRunning(false) {
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

    void drive(double distance) {
        if (isEngineRunning) {
            mileage += distance;
            std::cout << "Drove " << distance << " miles. Total mileage: " << mileage << std::endl;
        } else {
            std::cout << "Start the engine before driving." << std::endl;
        }
    }
}  ;


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
            isEngineRunning = true; std::cout << "Engine started for " << make << " " << model << std::endl;
        } else { std::cout << "Engine is already running for " << make << " " << model << std::endl; }
    }
    void stopEngine() {
        if (isEngineRunning) {
            isEngineRunning = false; std::cout << "Engine stopped for " << make << " " << model << std::endl;
        } else { std::cout << "Engine is already off for " << make << " " << model << std::endl; }
    }   
};

// Car class definition from previous commits (assumed to be here)

int main() {
    std::cout << "--- Starting Car Demos ---" << std::endl;
    Car myCar("Tesla", "Model 3", 2023, "White");
    myCar.startEngine();
    myCar.drive(80.0);
    myCar.setColor("Black");
    std::cout << "Current mileage: " << myCar.getMileage() << std::endl;
    myCar.stopEngine();
    std::cout << "--- Demos End ---" << std::endl;
    return 0;
}
