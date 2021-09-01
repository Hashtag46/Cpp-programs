#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int l,b,a,p;
    cout <<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"The area is: "<<a<<"units\n"<<endl;
    cout<<"The perimeter is: "<<p<<"units\n"<<endl;
    return 0;
}