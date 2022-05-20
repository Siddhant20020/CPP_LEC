#include <iostream>
using namespace std;
int sum(int x, int y, int z)
{
    return x+y+z;
}
int sum(int a, double b)
{
    return a+b;}
    int sum (int c)
    {
        return c;
    }
    int main()
    {
cout<< sum(1,2,3)<<endl;
cout<<sum(1,2,2)<<endl;
cout<<sum(4.4);
    }