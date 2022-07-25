#include <iostream>
using namespace std;
class A
{
    public:
    virtual void raw()
    {
      cout << "Base Function" << endl;
    }
};

class B : public A
{
    public:
    void raw()
    {
      cout << "Derived Function" << endl;
    }
};

int main(void)
{
  B obj;
  obj.raw();
  return 0;
}