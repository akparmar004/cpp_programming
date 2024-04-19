#include<iostream>
using namespace std;
int fact(int n)
{
	if(n == 1)
		return n;
		
	return n * fact(n - 1);
}

int main()
{
	int n;
	cout << "Enter number : ";
	cin >> n; 
	int ans = fact(n);
	cout << "factorial of entered number is : " << ans << endl;		
	return 0;
}

