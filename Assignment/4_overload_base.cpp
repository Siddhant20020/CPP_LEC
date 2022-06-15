#include<iostream>
using namespace std;
class base
{
    public:
    void display (char c)
    {
        cout<<"Display() in Base with char argument:"<<endl;

    }
    void display (int i){
        cout<<"Display()in Base with int argument:"<<endl;

    }
};
 class derived:public base
 {
    public: 
    void display()
    {
        cout<<"Display() in Derived without argument"<<endl;

    }
 };
 int main()
 {
    derived d1;
    d1.display();
    d1.display('a');
    d1.display(5);
    d1.base::display('a');
    d1.base::display(5);
    return 0;

 }