#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,3> arr2{1,2,3};
	
	for(auto i : arr2)
		cout << i << '\n';
		
	return 0;	
}
