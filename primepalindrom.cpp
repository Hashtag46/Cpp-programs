#include<iostream>
#include<conio.h>
using namespace std;
class PrimePalin
{
    int low,up;
    public:
    PrimePalin(int l,int u)
    {
        low=l;
        up=u;
    }

    int isPrime(int a)
    {
        int c=0;
        int i;
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                c++;
            }
        }
        if(c==2)
        return 1;
        else
        return 0;
    }

    int isPalin(int b)
    {
        int rev=0;
        int copy=b;
        while(copy>0)
        {
            int r=copy%10;
            rev=rev*10+r;
            copy=copy/10;
        }
        if(rev==b)
        return 1;
        else 
        return 0;
    }
    void display()
    {
        int i;
        for(i=low;i<=up;i++)
        {
            if(isPrime(i)==1 && isPalin(i)==1)
            {
                cout<<i<<endl;
            }
        }
    }
};
int main()
{
    int l1,u1;
    cout<<"Enter the lower limit: ";
    cin>>l1;
    cout<<"Enter the upper limit: ";
    cin>>u1;
    PrimePalin obj(l1,u1);
    obj.display();
    return 0;   
}