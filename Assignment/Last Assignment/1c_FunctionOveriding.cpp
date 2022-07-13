#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void function(){    
cout<<"Chasing..."<<endl;    
    }      
};   
class Man: public Animal    
{    
 public:  
 void function()    
    {    
       cout<<"Running ..."<<endl;    
    }    
};  
int main(void) {  
 Animal A =Animal();
   A.function();   //parent class object 
   Man m = Man();    
   m.function();   // child class object
   
   return 0;  
}