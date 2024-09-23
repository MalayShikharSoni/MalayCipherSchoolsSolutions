#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
  
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;
    cout << "Rectangle 1: " << endl;
    rect1.display();
    cout << "Rectangle 2: " << endl;
    rect2.display();
}
