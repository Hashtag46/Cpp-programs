#include <iostream>
#include <conio.h>
using namespace std;
class SimInt
{
    float si,t,r,p;
    public:
    void input()
    {
        cout<<"Enter the Principle: ";
        cin>>p;
        cout<<"Enter the rate: ";
        cin>>r;
        cout<<"Enter the no. of years: ";
        cin>>t;

    }
    void Compute()
    {
        si=(p*r*t)/100;
    }
    void display()
    {
        cout<<"The Simple Interest is "<<si<<endl;
    }
};
int main()
{
    SimInt obj;
    obj.input();
    obj.Compute();
    obj.display();
    return 0;
}