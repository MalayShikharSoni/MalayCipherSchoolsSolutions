#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; 
    *ptr = 10;
    cout << "value: " << *ptr << endl;
    delete ptr;
}