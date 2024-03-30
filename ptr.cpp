#include<iostream>
using namespace std;
int main()
{	
	int b = 10;
	int* a = &b;
	cout << a << '\n' << &a <<  '\n';
	return 0;
}
