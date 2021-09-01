#include <iostream>
#include <conio.h>
using namespace std;
class Tax
{
    int sal,t;
    public:
    Tax(int x)
    {
        sal=x;
    }
    /*void input()
    {
        cout<<"Enter your salary: ";
        cin>>sal;
    }*/
    void compute()
    {
        if(sal>500000 && sal<1000000)
        {
            t=0.2*sal;
        }
        if(sal>1000000 && sal<2000000)
        {
            t=0.3*sal;
        }
        if(sal>2000000)
        {
            t=0.35*sal;
        }
    }
    void display()
    {
        cout<<"The tax on your salary is: Rs."<<t<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter your salary: ";
    cin>>n;
    Tax obj(n);
    obj.compute();
    obj.display();
    return 0;
}