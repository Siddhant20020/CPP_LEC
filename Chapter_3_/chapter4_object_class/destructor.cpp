#include <iostream>
using namespace std;
class Helloworld{
    public:
    Helloworld(
        {
            cout<<"Constructor is called"<<endl;
        }
        ~Helloworld()
    {
        cout<<"Destructor is called";

    })
   };
   int main(){
       Helloworld obj;
       obj display();
       return 0;
   }