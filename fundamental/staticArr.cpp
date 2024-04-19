#include<iostream>
#include<array>
using namespace std;

int main()
{
	//becase static data has 0 value initially if we don't initialize it
	static array<int, 3> arr;
	//to fill array with values use fill method..
	fill(begin(arr),end(arr),50);
	for(auto i : arr)
		cout << i << endl;
		
	return 0;
}
