#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

    Car(string b, string m, string e, int seats) {
        brandName = b;
        model = m;
        engine = e;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << "Brand: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car car1("Maruti", "Swift", "XYZ", 5);
    car1.displayInfo();
}
