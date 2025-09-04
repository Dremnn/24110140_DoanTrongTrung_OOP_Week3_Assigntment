#include <bits/stdc++.h>
using namespace std;

class Vehicle {
private:
    string type;
    int maxSpeed;
    string fuelType;

public:
    // Constructor with input validation
    Vehicle(string vehicleType, int vehicleMaxSpeed, string vehicleFuelType) {
        type = vehicleType;
        
        if (vehicleMaxSpeed > 0) {
            maxSpeed = vehicleMaxSpeed;
        } else {
            maxSpeed = 0;
            cout << "Warning: Invalid speed entered. Set to 0 km/h." << endl;
        }
        
        fuelType = vehicleFuelType;
    }

    // Display all vehicle information
    void displayInfo() {
        cout << "Vehicle Type: " << type << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }

    // Core accelerate method as required
    void accelerate() {
        cout << "The " << type << " is accelerating to " << maxSpeed << " km/h." << endl;
    }

    // Additional method for refueling
    void refuel() {
        cout << "Refueling the " << type << " with " << fuelType << "." << endl;
    }

    // Compare speed with another vehicle
    bool isFaster(const Vehicle& otherVehicle) {
        return this->maxSpeed > otherVehicle.maxSpeed;
    }

    // Check if vehicle is electric
    bool isElectric() {
        return fuelType == "Electric" || fuelType == "electric";
    }

    // Getter methods (consistent naming)
    string getType() const { return type; }
    int getMaxSpeed() const { return maxSpeed; }
    string getFuelType() const { return fuelType; }
    
    // Setter methods with validation
    void setType(const string& vehicleType) { 
        type = vehicleType; 
    }
    
    void setMaxSpeed(int vehicleMaxSpeed) { 
        if (vehicleMaxSpeed >= 0) {
            maxSpeed = vehicleMaxSpeed; 
        } else {
            cout << "Error: Speed cannot be negative!" << endl;
        }
    }
    
    void setFuelType(const string& vehicleFuelType) { 
        fuelType = vehicleFuelType; 
    }
};

int main() {
    cout << "=== Vehicle Fleet Management System ===" << endl << endl;
    
    // Create predefined vehicles
    Vehicle car("Car", 200, "Electric");
    Vehicle truck("Truck", 150, "Diesel");
    Vehicle motorcycle("Motorcycle", 180, "Gasoline");

    // Display vehicle information
    cout << "Fleet Vehicles:" << endl;
    cout << "1. ";
    car.displayInfo();
    cout << endl;
    
    cout << "2. ";
    truck.displayInfo();
    cout << endl;
    
    cout << "3. ";
    motorcycle.displayInfo();
    cout << endl;

    // Demonstrate accelerate method
    cout << "=== Vehicle Acceleration Test ===" << endl;
    car.accelerate();
    truck.accelerate();
    motorcycle.accelerate();
    cout << endl;

    // Compare vehicles
    cout << "=== Speed Comparison ===" << endl;
    cout << "The " << car.getType() << (car.isFaster(truck) ? " is faster than the " : " is slower than the ")  << truck.getType() << "." << endl;
    cout << "The " << motorcycle.getType() << (motorcycle.isFaster(car) ? " is faster than the " : " is slower than the ")  << car.getType() << "." << endl;
    cout << endl;

    // Test electric vehicle detection
    cout << "=== Electric Vehicle Check ===" << endl;
    cout << "Car is " << (car.isElectric() ? "electric" : "not electric") << endl;
    cout << "Truck is " << (truck.isElectric() ? "electric" : "not electric") << endl;
    cout << endl;

    // User input section
    cout << "=== Create Your Own Vehicle ===" << endl;
    string userType, userFuel;
    int userSpeed;
    
    cout << "Enter vehicle type: ";
    getline(cin, userType);
    
    cout << "Enter max speed (km/h): ";
    cin >> userSpeed;
    cin.ignore(); // Clear input buffer
    
    cout << "Enter fuel type: ";
    getline(cin, userFuel);
    
    // Create user vehicle
    Vehicle userVehicle(userType, userSpeed, userFuel);
    
    cout << endl << "=== Your vehicle information ===" << endl;
    userVehicle.displayInfo();
    cout << endl;
    
    // Test user vehicle methods
    cout << "=== Your Vehicle Method Test ===" << endl;
    userVehicle.accelerate();
    userVehicle.refuel();

    if (userVehicle.isElectric()) {
        cout << "Your vehicle is environmentally friendly!" << endl;
    }
    
    // Compare with existing vehicles
    cout << endl << "=== Comparison with Fleet ===" << endl;
    cout << "Your " << userVehicle.getType() << " vs Fleet Car: " 
         << (userVehicle.isFaster(car) ? "Faster" : "Slower") << endl;
    
    cout << endl << "=== End of Fleet Management System ===" << endl;
    
    return 0;
}