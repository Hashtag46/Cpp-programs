#include<iostream>
#include<conio.h>
using namespace std;
class Day
{
    int d,m,y,r;
    int i;
    public:
    Day(int x,int w, int z)
    {
        d=x;
        m=w;
        y=z;
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
        int nd=0;
        for(i=1;i<m;i++) //have to reach the end of the 2ndLast month
        {
            nd=arr[i]+nd;
        }
        r=nd+d;
    }
    void display()
    {
        cout<<"The rank of the day is: "<<r<<endl;
    }
};
int main()
{
    int d1,m1,y1;
    cout<<"Enter the day: ";
    cin>>d1;
    cout<<"Enter the month: ";
    cin>>m1;
    cout<<"Enter the year: ";
    cin>>y1;
    Day obj(d1,m1,y1);
    obj.compute();
    obj.display();
    return 0;
}