//WAP to read name,roll and mark that catches multiple exception class if roll is negative,mark is greater than full mark.
#include <iostream>
using namespace std;
class Student {
    public:
    char name [25];
    int roll;
    double mark;
     void getData()
    {
        cout<<"Enter the name of the student :"<<endl;
        cin>>name;
        cout<<"Enter the roll no :"<<endl;
        cin>>roll;
    
        cout<<"Enter the marks obtained:"<<endl;
        cin>>mark;
    }
    
     void showData()
    {
        cout<<"Name : \t"<<name<<endl;
        cout<<"Roll : \t"<<roll<<endl;
        cout<<"Mark : \t"<<mark<<endl;
    }
};