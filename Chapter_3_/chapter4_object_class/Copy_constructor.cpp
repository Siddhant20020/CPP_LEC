#include <iostream>
using namespace std;

// declaring a class
class Wall {
  private:
    double length;
    double height;

  public:

   
    Wall(double len, double hgt) {
        // initiallizing variable
      length = len;
      height = hgt;
    }

// copy constructor with a wall object as parameter
// syntax for creating copy constructor
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
    // creating an object of wall class
 
  Wall wall1(4.99,5.000);

 
  Wall wall2 = wall1;

//   print area of wall1 &2
  
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea()<<endl;
};