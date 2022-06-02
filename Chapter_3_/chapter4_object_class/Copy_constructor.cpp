#include <iostream>
using namespace std;

<<<<<<< HEAD
// declaring a class
=======
// declare a class
>>>>>>> 9cfadf9380be064233713d9af05efa19cb342fc7
class Wall {
  private:
    double length;
    double height;

  public:

   
    Wall(double len, double hgt) {
<<<<<<< HEAD
        // initiallizing variable
=======
>>>>>>> 9cfadf9380be064233713d9af05efa19cb342fc7
      length = len;
      height = hgt;
    }

<<<<<<< HEAD
// copy constructor with a wall object as parameter
// syntax for creating copy constructor
=======

>>>>>>> 9cfadf9380be064233713d9af05efa19cb342fc7
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
<<<<<<< HEAD
    // creating an object of wall class
 
  Wall wall1(4.99,5.000);
=======
 
  Wall wall1(7.9, 3.5);
>>>>>>> 9cfadf9380be064233713d9af05efa19cb342fc7

 
  Wall wall2 = wall1;

<<<<<<< HEAD
//   print area of wall1 &2
  
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea()<<endl;
};
=======
  
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
>>>>>>> 9cfadf9380be064233713d9af05efa19cb342fc7
