#include<iostream>
using namespace std;
int main()
{ //Initailize variable value1 to 300000
  long value1 = 300000;
  //Declare the variable value2
  long value2;
  //Declare the pointer longPtr
  long * longPtr;
  //Assign the address of variable value1 to pointer variable longPtr. 
  longPtr = &value1;
  //Display the value of the object pointed to by longPtr.
  cout<<*longPtr<<endl;
  //Assign the value of the object pointed to by longPtr to variable value2.
   value2= *longPtr;
  //Display the value of value2
  cout<<value2<<endl;
  //Display the address of value1.
  cout<<&value1<<endl;
  //Display the address stored in longPtr
  cout<<longPtr<<endl;
}
