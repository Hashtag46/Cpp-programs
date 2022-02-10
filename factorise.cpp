#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factors are: ";
    for(i=1;i<=num;i++)
    {
        if (num%i==0) ///to isolate only the even factors, just give && i%2==0
        {
            cout<<i<<"\n"<<endl;
        }
    }
    return 0;
}
