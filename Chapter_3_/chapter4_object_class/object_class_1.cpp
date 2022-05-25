// WAP to calculate area and volume of a room.
#include<iostream>
using namespace std;
class Room{

   public:
  int length;
   int breadth;
   int height;
 int calculate_area(){
     return length*breadth;
 }

 int calculate_volume(){
     return length*breadth*height;}
};
int main(){
Room room1;
room1.length= 4;
room1.breadth=4.6;
room1.height=7.9;

 cout << "Area of the room =  " << room1.calculate_area() << endl;
    cout << "Volume of the room =  " << room1.calculate_volume() << endl;
    return 0;
}