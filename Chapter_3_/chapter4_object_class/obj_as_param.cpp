#include <iostream>
using namespace std;

class student
{
    public:
    double marks;

    student(double m){
        marks = m;
    }
};

int calculateAverage(student s1, student s2){
    double average = (s1.marks +s2.marks) / 2;
    cout<<"The average mrks of two students are"<<average<<endl;

}
int main ()
{
    student student1(98.78), student2(78.8);
    calculateAverage(student1, student2);

    return 0;
}