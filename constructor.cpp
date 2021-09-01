#include<iostream>
#include<conio.h>
using namespace std;
class Addition
{
    int a,b,c;
    public:
    Addition(int x, int y)
    {
        a=x;
        b=y;
        c=0;
    }
    void compute()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"The sum of "<<a<<" and "<<b<<"is: "<<c<<endl;
    }
};
int main()
{
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the Second number: ";
    cin>>n2;
    Addition obj(n1,n2);
    obj.compute();
    obj.display();
    return 0;
}