#include<iostream>
using namespace std;

bool iseven(int n)
{
	if(n % 2 == 0)
	{
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int n;
	cout << "enter number : ";
	cin >> n;
	if(iseven(n))
	{
		cout << "number is even..." << endl;
	}
	else
	{
		cout << "number is odd..." << endl;
	}
	return 0;
}
