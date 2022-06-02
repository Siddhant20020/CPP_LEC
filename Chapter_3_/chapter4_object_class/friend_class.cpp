#include <iostream>
using namespace std;
class myclass1{
    friend class myclass2;
    private:
    int x;
    public:
    my class1(int y){
         x = y;
    }
};
class myclass2{
    public:
    myclass2(myclass1.obj){
        cout<<"The value of x="<<obj.x<<endl;

    };
    int main(){
        my class obj1(2);
        myclass2 obj2(obj1);
   }
}
