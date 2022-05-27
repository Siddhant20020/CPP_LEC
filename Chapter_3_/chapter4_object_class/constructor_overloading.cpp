// C++ program to demonstrate constructor overloading
#include <iostream>
using namespace std;

class Room {
   private:
    double length;
    double breadth;

   public:
    // 1. Constructing Constructor with no arguments
    Room() {
        length = 5.6;
        breadth = 4.9;
    }

    // 2.Constructing Constructor with two arguments
    Room(double le, double bt) {
        length = le;
        breadth = bt;
    }
    // 3. Constructing Constructor with one argument
    Room(double len) {
        length = len;
        breadth = 4.8;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Room room1, room2(8.9, 5.4), room3(4.2);

    cout << "When no argument was passed: " << endl;
    cout << "Area of the room = " << room1.calculateArea() << endl;

    cout << "\nWhen the argument  was passed." << endl;
    cout << "Area of the room = " << room2.calculateArea() << endl;

    cout << "\nWhen breadth was fixed  & was passed:" << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;

    return 0;
}