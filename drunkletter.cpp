#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
  srand(time(0));
  const int size=60;            //size can be user-defined, it specifies the length of the race track
  cout << "Enter a letter to begin \n ";
  char x; 
  cin>> x;
  int position = size /2;       //you can also divide by 3 or something else but use appropriate type-casting
  while (true)            ///pseudo-infinite loop becuz there are break statements inside
  {
    cout << "|START|" ;
      for (int i=0; i<size;i++)       //this for loop for printing each frame
      {
        if (i == position) 
          cout << x;
        else cout << " ";
      }
    cout << "|FINISH|" << endl;
    int move= rand()%3 - 1;                //generating random 'move' values both -ve and +ve
    position = position + move; 
    if (position <1) 
    {
      cout << "You could not finish the race!" <<endl; 
      break;
    }
    if (position >size-1)            //in our case 60-1=59
    {
      cout << "Yay! You finished the race" << endl; 
      break;
    }
    for(int sleep=0; sleep< 1000000 ; ++ sleep);     ///specifies the number of frames or intuitionally the time of race
    //{cout<<"sleep"<<endl;}    //for debugging
  }   
  return 0; 
}