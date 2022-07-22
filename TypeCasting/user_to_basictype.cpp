#include <iostream>
using namespace std;
class Celsius
{
private:
    float temper;

public:
    Celsius()
    {
        temper = 0;
    };
    operator float()
    {
        float fer;
        fer = temper * 9 / 5 + 32;
        return fer;
    }
    void gettemper()
    {
        cout << "Enter temperature in Celsius";
        cin >> temper;
    }
};
int main()
{
    Celsius cel;
    float fer;
    cel.gettemper();

    fer = cel;
    cout << "Temperature in ferheinheit scale" << fer;
}