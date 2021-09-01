#include<iostream>
#include<conio.h>
using namespace std;
class Day
{
    int d,m,y,r;
    int i;
    public:
    Day(int x,int w)
    {
        r=x;
        y=w;
    }
    int LeapCheck(int a)
    {
        if((a%100==0 && a%400==0)||(a%100!=0 && a%4==0))
        return 1;
        else
       return 0;
    }
    void compute()
    {
        int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(LeapCheck(y)==1)
        {
            arr[2]=29;
        }
        // for(i=1;i<r;i++) //have to reach the end of the 2ndLast month
        // {
        //     nd=arr[i]+nd;
        // }
        // r=nd+d;
        i=1;
        while(r> arr[i])
        {
            r=r-arr[i];
            i++;
        }
        m=i;
        d=r;
    }
    void display()
    {
        int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(LeapCheck(y)==1)
        {
            arr[2]=29;
        }
        if(d==0)
        {
            cout<<"The date is: "<<arr[m-1]<<" "<<m-1<<" "<<y<<endl;
        }
        else {
            cout<<"The date is: "<<d<<" "<<m<<" "<<y<<endl;
        }
    }
};
int main()
{
    int r1,y1;
    cout<<"Enter the year: ";
    cin>>y1;
    cout<<"Enter the rank of the day: ";
    cin>>r1;
    Day obj(r1,y1);
    obj.compute();
    obj.display();
    return 0;
}