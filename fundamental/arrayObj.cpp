#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int,3> arr{1,2,3};
	for(int i = 0;i < arr.size();i++)
		cout << arr[i] << endl;	
		
	return 0;
}
