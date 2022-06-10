#include <iostream>
using namespace std;
class complex {
    private:
    double real, imaginary;
    public:
    void input(){
        cout<<"\n Enter the real number:";
        cin>>real;
        cout<<"\n Enter the imaginary number:";
        cin>>imaginary;
    }
    complex sum(complex c1, complex c2){
        complex result;
        result.real=c1.real+c2.real;
        result.imaginary=c1.imaginary+c2.imaginary;
        return result;
    }
    void display (complex result){
        cout<<"The sum:"<<result.real<<"+i"<<result.imaginary<< endl;}};
    
    int main()
    {
        complex num1,num2, result1;
        num1.input();
        num2.input();
        result1.display(result1.sum(num1,num2));
    }
