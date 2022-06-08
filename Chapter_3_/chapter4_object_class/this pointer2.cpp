#include <iostream>
using namespace std;
class Test{
private:
int x;
public:
void setX(int x){
    this->x = x;
}
void print(){
cout<< "The value of x is:"<<x << endl;
cout <<"The address of the object that is calling x is"<< this<< endl;
}
};
int main(){
    Test obj, obj2;
    obj.setX(20);
    obj.print();
    obj.setX(100);
    obj2.print();
    return 0;
}