// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  
  Wall wall1(4.99, 4.99);


  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  

  return 0;
}