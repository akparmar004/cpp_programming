#include<iostream>
using namespace std;

int main()
{
	int a[] = {1,2,3,4,5};
	int (&ra)[5] = a;
	
	for(int i = 0;i<5;i++)
		cout << ra[i] << endl;
}
