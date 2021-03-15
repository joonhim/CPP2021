// Joon Im
// Marie Payad
// Demo: 9:0

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sort6(int &a, int &b, int &c, int &d, int &e, int &f){
  int arr[]={a, b, c, d, e, f};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+n);
  int sum = 0;
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << endl;
    sum = sum + arr[i];
  }
  return sum;
}

int main()
{
  srand(time(NULL));
  int a = (rand()%400 + 100);
  int b = (rand()%400 + 100);
  int c = (rand()%400 + 100);
  int d = (rand()%400 + 100);
  int e = (rand()%400 + 100);
  int f = (rand()%400 + 100);
    
  cout << "Array Before Sorting: " << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;

  cout << "Array After Sorting: " << endl;
  int sum = sort6(a, b, c, d, e, f);
  cout << "Sum of the Array is : " << sum << endl;

  return 0;
}