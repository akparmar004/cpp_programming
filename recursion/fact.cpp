#include<iostream>
using namespace std;
int fact(int n)
{
	if(n < 2)
		return n;

	return n*fact(n-1);
}

int main()
{
	int times;

	while(1)
	{
		int num;
		cout << "enter number : ";
		cin >> num;
		int ans(fact(num));
		cout << "factorial of " << num << " is " << ans << endl;
	
		cout << "enter 1 for countinue otherwise exit..";
		cin >> times;
		if(times == 1)
			continue;
		else
		{
			cout << "bye..\n";
			break;
		}
	}
	return 0;
}
