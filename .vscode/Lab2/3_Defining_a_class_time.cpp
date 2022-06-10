#include <iostream>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    void gettime(){
        cout<<"Hour:"<<endl;
        cin>>hr;
        cout<<"Minute:"<<endl;
        cin>>min;
        cout<<"Second:"<<endl;
        cin>>sec;

    }
    void sum(Time one, Time two){
        this-> sec= one.sec +two.sec;
         this->hr= one.hr +two.hr;
        this-> min= one.min +two.min+(this-> sec/60);
        
        this -> min%=60;

        this -> sec %=60;
    }
    void display(){
    cout<<"The time is:"<<hr<<":"<<min<<":"<<sec<<endl;

}};
int main()
{
    Time t1,t2,add;
    t1.gettime();
    t2.gettime();
    add.sum(t1,t2);
    add.display();
}