#include<iostream>
using namespace std;
void print()
{
	static int x = 1;
	cout << x << endl;
	x++;
}
int main()
{
	print();
	print();
	print();
	print();
	print();
}
