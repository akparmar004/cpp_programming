#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int, 3> arr{1,2,'a'};
	
	for(auto& i : arr)
		cout << i << endl;
		
	return 0;
}
