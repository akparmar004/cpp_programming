#include<iostream>
using namespace std;
int main()
{
	int *p,i = 0,sum = 0;
	p = new int[5]{1,2,3,4,5};
	while(i < 5)
	{
		if(p[i] % 2 != 0)
		{
			sum += p[i];
		}
		i++;
	}
	cout << "sum of all odd numbers = " << sum << endl;
	delete [] p;
	return 0;
}
