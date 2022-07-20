#include <iostream>
using namespace std;
class test{
    public:
    int data;
    test(){
        cout<<"endl Constructor test() is called"<<endl;

    }
    ~test(){
        cout<<"endl Deconstructor ~test() is called"<<endl;

    }
    vpid show(){
        cout<<"endl data is"<<data<<endl;
    }

};
int main{
test *ptr;
test tobj;
ptr=&tobj;
cout<<"endl Accessing object through tobj.show()..";
tobj.show();
cout<<"endl Accessing object through ptr ->show()..";
ptr -> show;
return 0;
}