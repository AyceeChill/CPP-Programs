#include<iostream>
using namespace std;

template <class X> void func(X &x, X &y)
{
    X temp;
    temp=x;
    x=y;
    y=temp;   
};

void func(int &x, int &y)// explicitly overloaded func()
{
    int temp;
    temp=x;
    x=y;
    y=temp;
};

int main()
{
  int i=10, j=20;
  double x=10.1, y=23.3;
  char a='x', b='z';

  func(i, j); // calls explicitly overloaded func()
  func(x, y); // calls generic func()
  func(a, b); // calls generic func()

  cout << "Swapped i, j: " << i << ' ' << j << '\n';
  cout << "Swapped x, y: " << x << ' ' << y << '\n';
  cout << "Swapped a, b: " << a << ' ' << b << '\n';

  return 0;
}