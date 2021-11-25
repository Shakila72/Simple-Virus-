#include<windows.h>// to access windows library
#include<winable.h> // to use BlockInput function
#include<iostream>
using namespace std;
int main()
{
	cout<<"Block Input"<<endl;
   BlockInput(true); // function to block input
  //block input from keyboard and mouse
  Sleep(10000); // BlocK input for 10 seconds 
  
  // for unblocking after 10 secods
  cout<<"Unblock input"<<endl;
  
  BlockInput(false); 
  // false means BlockInput function stops
  Sleep(2000); // wait 2 seconds after Unblock
  return 0;
}

