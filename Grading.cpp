#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter the marks of English: ";
    cin>>s1;
    cout<<"Enter the marks of Maths: ";
    cin>>s2;
    cout<<"Enter the marks of Science: ";
    cin>>s3;
    int a=(s1+s2+s3)/3;                                       //90-100 = A+ 80-89 = A 70-79 = B+ 60-69 = B
    if(a<=100 && a>=90)
    {
        cout<<"Your grade is: A+ ";
    }                                                           //  50-59 = C+ 40-49 = C <40 = D(FAIL)
    else if(a<=89 && a>=80)
    {
        cout<<"Your grade is: A ";
    } 
    else if(a<=79 && a>=70)
    {
        cout<<"Your grade is: B+ ";
    } 
    else if(a<=69 && a>=60)
    {
        cout<<"Your grade is: B ";
    } 
    else if(a<=59 && a>=50)
    {
        cout<<"Your grade is: C+ ";
    } 
    else if(a<=49 && a>=40)
    {
        cout<<"Your grade is: C ";
    } 
    else if(a<=40)
    {
        cout<<"Your grade is: D ";
    } 
    return 0;
}