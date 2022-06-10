#include<iostream>
using namespace std;
class class2;
class class1{
    private:
    int num1;
    public:
    friend int add(class1 a, class2 b);
    class1(){
        num1=37;
    }
};
class class2{
    private:
    int num2;
    public:
    friend int add (class1 a, class2 b);
    class2(){
        num2=23;
    }
};
int add(class1 a, class2 b){
    return a.num1 + b.num2;
}
int main(){
    class1 obj1;
    class2 obj2;
    int sum=add(obj1,obj2);
    cout<<"The sum of the two private data of class1 and class 2:"<<sum<<endl;
    return 0;
}