#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    Student(string n, int r) {
        this->name = n;
        this->roll = r;
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Roll Number: " << this->roll << endl;
    }
};

int main() {
    Student student1("Malay", 29);
    student1.displayDetails();
}
