#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the number: ";
        cin>>num;
        sum=sum+num;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}