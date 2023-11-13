#include<iostream>
using namespace std;

void swap(int *p,int *p1)
{
	*p = *p + *p1;
	*p1 = *p - *p1;
	*p = *p - *p1;
}

int main()
{
	int a = 10, b = 20;
	cout << "before swap a = " << a << " b = " << b << endl;
	swap(&a,&b);
	cout << "after swap a = " << a << " b = " << b << endl;
	return 0;
}
