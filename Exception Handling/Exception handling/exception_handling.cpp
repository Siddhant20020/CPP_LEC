#include<iostream>
using namespace std;
int main (){
    float x= -1;
    cout <<"Before try "<<endl;
    try{
        cout<<"Inside try"<<endl;
        if (x<0){
            throw x;
            cout<<"After throw"<<endl;

        }
    }
    catch (int x){
        cout<<"Exception Caught. Int type "<<endl;
        
    }
    catch(float x){
        cout<<"Exception Caught. Float type"<<endl;

    }
    cout <<"After catch "<<endl;
    return 0;
}