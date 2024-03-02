#include <iostream>
using namespace std;
class Transport {
public:
    virtual void displayInfo() = 0;
    virtual void fuelConsumption() = 0;
};
class Airplane : public Transport {
public:
	void displayInfo() {
		cout << "Airplane" << endl;
	}
	void fuelConsumption() {
		cout << "Fuel consumption: high" << endl;
	}
};
class Ship : public Transport {
public:
	void displayInfo() {
		cout << "Ship" << endl;
	}
	void fuelConsumption() {
		cout << "Fuel consumption: moderate" << endl;
	}
};
class Truck : public Transport {
public:
	void displayInfo() {
		cout << "Truck" << endl;
	}
	void fuelConsumption() {
		cout << "Fuel consumption: high" << endl;
	}
};
class Bicycle : public Transport {
public:
	void displayInfo() {
		cout << "Bicycle" << endl;
	}
	void fuelConsumption() {
		cout << "Fuel consumption: none" << endl;
	}
};
class Car : public Transport {
public:
	void displayInfo() {
		cout << "Car" << endl;
	}
	void fuelConsumption() {
		cout << "Fuel consumption: moderate" << endl;
	}
};
int main()
{
    Transport* vehicle = nullptr;
	int choice;
	do {
		cout << "Choose a vehicle type to create (1 - Airplane, 2 - Ship, 3 - Truck, 4 - Bicycle, 5 - Car, 0 - Exit): ";
		cin >> choice;
        switch (choice) {
		case 1:
			vehicle = new Airplane;
			break;
		case 2:
			vehicle = new Ship;
			break;
		case 3:
			vehicle = new Truck;
			break;
		case 4:
			vehicle = new Bicycle;
			break;
		case 5:
			vehicle = new Car;
			break;
		case 0:
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			continue;
		}
		if (vehicle != nullptr) {
			vehicle->displayInfo();
			vehicle->fuelConsumption();
		}
	} while (choice != 0);
	return 0;
}

