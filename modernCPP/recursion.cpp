#include<iostream>
using namespace std;
int count(int n)
{
	if(n == 0)
	{
		cout << "0 booommmmm....\n";
		return 0;
	}
	cout << n << '\n';
	return count(n-1);
}
int main()
{
	count(5);
	return 0;
}
