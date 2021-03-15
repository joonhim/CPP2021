//Joon Im
//Marie Payad
//Demo: 9:13
#include <iostream>
#include <string>

using namespace std;

struct Car
{
  string make;
  string model;
  int year;
  string color;
  int mileage;
  int mpg;
  double price;
};


void display(Car c[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << c[i].make << ", ";
    cout << c[i].model << ", ";
    cout << c[i].year << ", ";
    cout << c[i].color << ", ";
    cout << c[i].mileage << ", ";
    cout << c[i].mpg << ", ";
    cout << c[i].price << endl;
  }
}
//Driver
int main()
{
  Car carLot[5] =
  {
  {"Chevy", "Camaro", 2010, "Yellow", 32500, 15, 25000},
  {"Kia", "Optima", 2015, "White", 100, 14, 30000},
  {"Honda", "Civic", 2005, "Red", 125000, 17, 5000}, 
  {"Tesla", "Model X", 2018, "Black", 2500,  20, 65000}, 
  {"Ferrari", "F360 ", 2003, "Blue", 14500, 15, 60000}
  };

  int size = sizeof(carLot) / sizeof(carLot[0]);
  display(carLot, size);
  return 0;
}