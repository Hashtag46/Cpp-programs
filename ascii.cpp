#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    for(i=0;i<256;i++)
    {
        cout<<i<<" "<<(char)i<<"\t";
    }
    return 0;
}