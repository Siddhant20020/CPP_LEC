#include <iostream>
using namespace std;
class Simple_Interest{
    private:
    float p,t,r;
    public:
    void calculate_Interest(float p,float t, float r=15){
        float Interest=(p*t*r)/100;
        cout<<"Simple Interest will be:"<<Interest<<endl;
    }
};
int main(){
    Simple_Interest case1;
    case1.calculate_Interest(100,5);
    case1.calculate_Interest(100,1,2);}