#include<iostream>
using namespace std;
void normal(int x)
{
    x=3;
    cout<< x << endl;

}
void reference(int &y){
     y = 44;
    cout<< y << endl;
}
int main(){
    int x = 1;
    int y = 89;

   normal(x);
   reference(y);
cout<<x<<endl;
cout<<y<<endl;
return 0;
