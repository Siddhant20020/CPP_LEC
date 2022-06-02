//friend function can access private data of a class
// we declare freind function using friend keyword inside body of a class 
// syntax- friend returnTyep functionName(arguments)
#include <iostream>
using namespace std;
class Distance{
    friend int add(Distance );
    private:
    int meter;
    public:
    Distance (){
        meter = 0;

    }
};
int add(Distance d){
    d.meter = d.meter+5;
    return d.meter;
}
int main(){
    Distance distl
    cout<<"DIstance:"<<add(dist);
    return 0;
}