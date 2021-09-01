#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
    int l,b,a,p;
    public:
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;

    }
    void Area()
    {
        a=l*b;
    }
    void Perimeter()
    {
       p=2*(l+b);
    }
    void display()
    {
        cout<<"The Area is "<<a<<endl;
        cout<<"The Perimeter is "<<p<<endl;
    }
};
int main()
{
    Rectangle obj;
    obj.input();
    obj.Area();
    obj.Perimeter();
    obj.display();
    return 0;
}
