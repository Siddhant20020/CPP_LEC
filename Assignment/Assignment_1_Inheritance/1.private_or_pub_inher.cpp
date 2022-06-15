#include <iostream>
using namespace std;
class A{
    private:
    int pvtdataA;
    protected:
    int protdataA;
    public:
    int pubdataA;
};
class B:public A //publicly derived
{
    public:
    void func(){
        inta;
        a=pvtdataA;
        a=protdataA;
        a=pubdataA;
    }
};
class C: protected A //protectedly derived.
{
    public:
    void func()
    {
        int a;
          a=pvtdataA;
        a=protdataA;
        a=pubdataA;
    }
    class D: protected A//protectedly derived.
{
    public:
    void func()
    {
        int a;
          a=pvtdataA;
        a=protdataA;
        a=pubdataA;
        
    }
};
int num(){
    B objB;
    num=objB.pvtdataA;
    num=objB.protdataA;
    num=objB.pubdataA;

    C obj.C;
    num= obj.C.pvtdataA;
    num= obj.C.protdataA;
    num= obj.C.pubdataA;

    D objD;
    num=objD.pvtdataA;
    num=objD.protdataA;
    num=objD.pubdataA;
return 0;
}