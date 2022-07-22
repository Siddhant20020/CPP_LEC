#include <iostream>
using namespace std;
class celsius
{
    private:
    float temp;
    public:
    celsius (){
temp=0;
    }
    int convert(float ftmp){
        temp=(ftmp-32)*5/9;


    }
    //conversion constructor
    void showtemp(){
        cout<<"Temperature in Celsius:"<<temp<<endl;
    }
};
int main(){
    celsius cel;
    float fer;
    int age;
    fer= age;
    cel=fer;
    cel.showtemp();
}