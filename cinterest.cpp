#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t,ci;
    cout<<"Enter the principal value: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the number of years: ";
    cin>>t;
    ci=p*pow(1+r/100,t)-p;
    cout<<"The compound interest on the given principal is: "<<ci<<endl;
    return 0;
}
