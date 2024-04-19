#include<iostream>
using namespace std;

int print()
{
	cout << "in print function\n";
	//undefined behaviar because we are not returning int value..
}

int main()
{
	print();
	return 0;
}
