#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int EvenSum(string x)
{
	int i;
	int sum=0;
	for(i=1;i<16;i+=2)
	{
		sum+=(x[i]-'0');
	}
	return sum;
}
int OddSum(string y)
{
    int i;
    int sum=0;
    int buffer;
    int sProd;
    for(i=0;i<16;i+=2)
    {
        buffer=2*(y[i]-'0');
        if(buffer>9)
        {
            sProd=(buffer/10)+(buffer%10);
            sum+=sProd;
        }
        else{sum+=buffer;}
    }
    return sum;
}
int main()
{
	
    // string str="0101010101010101";
	// cout<<EvenSum(str);
    string CredNum;
    int checkSum;
    int n;
    cout<<"This program uses Luhn's Algorithm to check validation of a Credit Card"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"Enter your Credit Card Number(without spaces): ";
    cin>>CredNum;
    
    n=CredNum.length();
    if(n!=16)
    {
        cout<<"Invalid Credit Card Number"<<endl;
    }
    else{
    checkSum=EvenSum(CredNum)+OddSum(CredNum);
    if(checkSum%10==0)
    {
        cout<<"The Credit Card is valid."<<endl;
    }
    else{
        cout<<"The Credit Card is invalid";
    }
    }
	return 0;
}