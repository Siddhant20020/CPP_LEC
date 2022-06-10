#include<iostream>
using namespace std;
class Mean{
    friend float mean (Mean);
    private:
    float num1,num2,calculate_mean;
    public:
    void getdata(){
        cout<<"Enter the value of num1:"<<endl;
        cin>>num1;
        cout<<"Enter the value of num2:"<<endl;
        cin>>num2;
    }
};
float mean(Mean m1){
    m1.calculate_mean=(m1.num1+m1.num2)/2;
    return m1.calculate_mean;
}
int main(){
    Mean m1;
    m1.getdata();
    float ans=mean(m1);
    cout<<"The mean:"<<ans<<endl;
}