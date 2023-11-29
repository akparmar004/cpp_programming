#include<iostream>
using namespace std;

int main()
{
	int r;
	cout << "enter rows : ";
	cin >> r;
	
	int n = 1;
	int i = 1;
	while(i <= r)
	{	
		int j = 1;
		while(j <= 3)
		{
			if(n < 10)
				cout << n << "  ";
			else
				cout << n << " ";
			
			j++, n++;
		}
		cout << endl;
		i++;
	}
}
