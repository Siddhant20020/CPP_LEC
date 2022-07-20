#include <iostream>
using namespace std;
int main(){
    char str1[20], str2[20];
    cout<<"Enter first string:";
    cin.get(str1, 20);
    cout<<"Enter next string:";
    cin.ignore();//remove the newline left by get()
    cin.get(str2, 20);
    cout<<"You entered:"<<endl;
    cout<<"String1:"<<str1<<endl;
    cout<<"String2:"<<str2<<endl;
return 0;

}