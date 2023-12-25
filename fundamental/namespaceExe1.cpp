#include<iostream>

using namespace std;

namespace demo
{
	int add(int x,int y)
	{
		return x+y;
	}
}
using namespace demo;
int main()
{
	cout << add(10,20) << endl;
}
