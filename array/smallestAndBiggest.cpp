#include<iostream>
using namespace std;
int main()
{
	int *p,i = 0,biggest = 0;
	p = new int[7]{1,2,3,4,5,12,10};
	while(i < 9)
	{
		if(p[i] < p[i+1])
		{
			biggest = p[i+1];
		}
		i++;
	}
	cout << "biggest - " << biggest << endl;
	for(i = 0;i < 5;i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete [] p;
	return 0;
}
