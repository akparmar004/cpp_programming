#include<iostream>
using namespace std;

void swap(int &p, int &q)
{
	cout << "call by reference : " << endl;
	p = p + q;
	q = p - q;
	p = p - q;
}

int main()
{
	int a = 10,b = 20; 
	cout << "a = " << a << " b = " << b << endl;
	swap(a,b);
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}
