//Joon Im
//Marie Payad
//Demo:9:00
#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
const int SIZE=3;
int grade[SIZE]={10,20,30};
//Create an array of pointer of type integer. Name the array aptr
// A. YOUR CODE
int* aptr [SIZE];
//B. Assign each array element of aptr to point to array elements of array grade.
//YOUR CODE
for(int i = 0; i < SIZE; i++)
{
  *(aptr + i) = &grade[i];
}

for(int i =0;i<SIZE;i++)
{ cout<<"Value of grade["<<i<<"] = ";

  //C. Output the the grade content using aptr array
  cout << *aptr[i] << endl;

  //D. Output the address of array element aptr
//YOUR CODE
  cout << "Address of aptr = " << &aptr[i] << endl;
  
  //E. Output the content of aptr
//YOUR CODE
  cout << "Content of aptr = " << aptr[i] << endl;

  //F.Output the address of array element of array grade
//YOUR CODE
  cout << "Address of grade = " << &grade[i] << endl;
  cout << endl;
}
return 0;
}