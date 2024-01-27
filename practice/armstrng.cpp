#include<iostream>
using namespace std;
int main()
{
	int n,temp,org;
	//taking input number
	cin >> n;

	temp = n;
	org = 0;
	while(temp > 0)
	{
		int r = temp % 10;
		org = org + (r*r*r);
		temp /= 10;	
	}
	if(org == n)
		cout << "yes it is..\n";
	else
		cout << "no it's not..\n";

	return 0;
}
