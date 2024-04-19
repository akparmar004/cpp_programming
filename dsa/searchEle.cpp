#include<iostream>
using namespace std;
int count(int n,int a[],int size)
{
	int c = 0;
	for(int i = 0;i < size; i++)
	{
		if(a[i] == n)
			c++;
	}
	return c;
}

int main()
{
	int arr[] = {1,1,2,3,1,4,2,4,5,6,3,2,1};
	
	cout << "1 is available " << count(1,arr,sizeof(arr)/sizeof(arr[0])) << " times in array..\n";
	
	return 0;
}
