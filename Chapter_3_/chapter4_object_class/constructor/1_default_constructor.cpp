// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  construct{
  public:
     int a,b;

  
    // default constructor to initialize variable
construct() {
    
      
    
      cout << "Constructor is called"<< endl;
      a= 10;
    b=20;
    }

    void display() {
        cout<<"I am not a constructor";
    }
};

int main() {
  construct c;
  c.display();

//   c.display();
  return 0;
}