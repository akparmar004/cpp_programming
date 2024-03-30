#include<iostream>
using namespace std;

template <class T>
void sort(T a[],int n)
{
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = n - 1;i < j;j--)
		{
			if(a[j] < a[j-1])
				swap(a[j], a[j-1]);
		}
	}
}

int main()
{
	int a[5] = {10,20,30,40,50};
	int n = sizeof(a)/sizeof(a[0]);
	
	sort<int>(a,n);
	
	cout << "sorted array :\n";
	
	for(int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	cout << '\n';
	
	return 0;
}
