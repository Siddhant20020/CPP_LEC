// WAP to calculate area and volume of a room.
#include<iostream>
using namespace std;
class Room{

   private:
  int length;
   int breadth;
   int height;
   public:
   int setvalue(int len,int bth,int hgt){
length= len;
breadth=bth;
height=hgt;

   }
 int calculate_area(){
     return length*breadth;
 }

 int calculate_volume(){
     return length*breadth*height;}
};

int main(){
Room room1;
int length,breadth,height;
    room1.setvalue(9,8,7);

 cout << "Area of the room =  " << room1.calculate_area() << endl;
    cout << "Volume of the room =  " << room1.calculate_volume() << endl;
    return 0;
}