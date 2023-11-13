#include<iostream>
using namespace std;

int main()
{
  int x = 100;
  int *p = &x;
  int* &rp = p;

  cout << "*rp = " << *rp << endl;
  cout << "*p = " << *p << endl;
  *rp = 400;
  cout << x << endl;

  return 0;
}
