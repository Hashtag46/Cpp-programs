#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    /*cout<<"Enter the number: ";
    cin>>n;
    cout<<n<<"-";*/
    int i;
    for(i=5;i<=20;i++){
        n=i;
        cout<<n<<"-";
    do{
        if (n%2!=0)
        {
            n=(3*n)+1;
            cout<<n<<" ";
        }
        else{
            n=n/2;
            cout<<n<<" ";
        }
    }while(n!=1);
    cout<<endl;
    }
    return 0;
}