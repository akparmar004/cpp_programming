#include<iostream>
#include <ostream>

using namespace std;
int a = 200;
int main()
{
  int a = 100;
  cout << "a = " << ::a << endl;
  cout << "a = " << a << endl;
}
