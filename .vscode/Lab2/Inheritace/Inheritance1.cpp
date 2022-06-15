#include<iostream>
using namespace std;
class Account{
   public:
   int salary=25000;
};
class Programmer: public Account{
    public:
    int bonus=34000;
};
int main(){
    Programmer P1;
    cout<<"salary:"<<P1.salary<<endl;
    cout<<"bonus:"<<P1.bonus<<endl;
    return 0;
}