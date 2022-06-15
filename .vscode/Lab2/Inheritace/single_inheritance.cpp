#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eat"<<endl;
    }
};
class Cat: public Animal
{
    public:
    void meow(){
        cout<<"Meow..";
    }
};
int main(){
    Cat c1;
    c1.eat();
    c1.meow();
    return 0;
}