// iteminfo.cpp
// an example of class
#include <iostream>
using namespace std;
class iteminfo
{
    private:
    int itemid;
    float cost;
    public:
    void setdata(int it, float cst)
    {
        itemid=it;
        cost=cst;
    }
    void showdata()
    {
        cout<<"\\nItem ID:"<<itemid;
        cout<<"\\ncost:"<<cost<<endl;
    }
};
int main()
{
    iteminfo i1,i2;
    i1.setdata(34,43.45);
     i2.setdata(345,433.415);
     cout<< "Information on first item";
     i1.showdata();
              cout<<"Information on second item";
i2.showdata();
return 0;


}