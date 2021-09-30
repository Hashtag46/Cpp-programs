#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
//The Luhn Algorithm works in the following way:
//A typical credit card number is of 16 digits. The Luhn Algorithm does digit operations for the validation
//Algorithm:
//1.Starting from left-most digit, multiply every digit in ODD-POSITIONS by 2 and those in EVEN-POSITIONS by 1.
//2.If any of the products is a 2-digit number then add those digits. //example: 9*2=18, so do 1+8 and store the result
//3. Now add up all the results and if the sum is divisible by 10, then it is valid CCnumber. else, invalid.
int EvenSum(string x)      //funciton for evaluating sum of digits at EVEN-POSITIONS
{
	int i;
	int sum=0;
	for(i=1;i<16;i+=2)
	{
		sum+=(x[i]-'0');   //if you write just sum+=x[i], then it'll not work because it is char data-type. But the difference of two chars give int
				   //so, just so that the thing you are adding is int, you need to subtract char '0'
	}
	return sum;
}
int OddSum(string y)           //funciton for evaluating sum of digits at ODD-POSITIONS
{
    int i;
    int sum=0;
    int buffer;
    int sProd;   //indicates the 'special product', which I define to be the result when a product is 2-digit and you have to add the digits
    for(i=0;i<16;i+=2)
    {
        buffer=2*(y[i]-'0');               //buffer is used as a temporary variable because sometimes a case of sProd will occur where the result is to be added
        if(buffer>9)
        {
            sProd=(buffer/10)+(buffer%10);
            sum+=sProd;
        }
        else{sum+=buffer;}
    }
    return sum;
}
//Driver Program
int main()
{
    string CredNum;            //contains the CCnumber that the user inputs
    int checkSum;              //contains the total sum of the results(in case of sProd) and products
    int n;                     //contains the length of the string
    cout<<"This program uses Luhn's Algorithm to check validation of a Credit Card"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"Enter your Credit Card Number(without spaces): ";
    cin>>CredNum;
    
    n=CredNum.length();
    if(n!=16)
    {
        cout<<"Invalid Credit Card Number"<<endl;          //CCnumbers are typically 16 digit numbers
    }
    else{
    checkSum=EvenSum(CredNum)+OddSum(CredNum);              //passing the string for even and odd operations
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
