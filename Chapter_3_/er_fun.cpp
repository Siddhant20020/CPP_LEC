#include <iostream>
using namespace std;
void display(int a, int x)
{
cout<<"sum is"<<a+x;
}
void display(double y){
    cout<<"The value is"<<y;
}
int main()
{
    display(4.7);
    return 0;
}