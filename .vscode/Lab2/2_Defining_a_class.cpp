#include <iostream>
using namespace std;
class student
{
    private:
    char name [24];
int roll;   
    char address[75];
    float percentage;
    public:
    void input()
    {
        cout<<"Enter a Student's name:"<<endl;
        cin>>name;
        cout<<"Enter his/her roll no:"<<endl;
        cin>>roll;
        cout<<"Enter his/her address:"<<endl;
        cin>>address;
        cout<<"Enter his/her percentage:"<<endl;
cin>>percentage;
    }
  void display()
  {if (percentage>=40){
      cout<<"Pass:\n"<<"\t"<<name<<"\t"<<roll<<"\t"<<address<<endl;
  }

else
{
    cout<<"Fail:\n"<<"\t"<<name<<"\t"<<roll<<"\t"<<address<<endl;
 }
};
int main()
{
    int n, i;
student s[n];
    cout<<"Enter the number of Students present:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s[i].input(); 
        }
          for(i=1;i<=n;i++)
        {
            s[i].display();
        }
  return 0;
}