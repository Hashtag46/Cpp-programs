#include<iostream>
#include<conio.h>
using namespace std;
class Collaz
{
    int n,i;
    public:
    Collaz(int x)
    {
        n=x;
    }
    void compute()
    {
        int num=n;
        do{
            if (n%2!=0)
            {
                n=(3*n)+1;
            }
            else{
                n=n/2;
            }
            /*for(i=1;i<=n;i++)
            {
                cout<<"|";
            }
            cout<<endl;*/
            if(num<25)
            Graph(n);
            else
            Graph1(n);
        }while(n!=1);
    cout<<endl;
    }
    void delay()
    {
        int i,j;
        for(i=1;i<=10000;i++)
        {
            for(j=1;j<=10000;j++)
            {

            }
        }
    }
    void Graph(int y)
    {
        cout<<y<<"\t";
        for(i=1;i<=y;i++)
            {
                delay();
                cout<<(char)(176);
            }
            cout<<endl;
    }
    void Graph1(int y)
    {
        cout<<y<<"\t";
        for(i=1;i<=y;i++)
            {
                //delay();
                cout<<(char)(179);
            }
            cout<<endl;
    }

};
int main()
{
    int num;
    cout<<"Enter the seed: ";
    cin>>num;
    Collaz obj(num);
    obj.compute();
    return 0;
}