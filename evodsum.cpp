#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    int sum1=0;
    int sum2=0;
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the number: ";
        cin>>num;
        if(num%2==0)
        {
            sum1=sum1+num;
            }
        else
        {
            sum2=sum2+num;
            }
    }
    cout<<"The sum of even numbers is "<<sum1<<endl;
    cout<<"The sum of odd numbers is "<<sum2<<endl;
    return 0;
}