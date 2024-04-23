#include<iostream>
#include<array>

using namespace std;

int main()
{	
	array<int,5> arr{1,2,3,4,5};
	int i = 0;
	while(i < arr.size())
	{	
		if(i == 3)
		{
			i++;
			continue;
		}
		cout << arr[i] << '\n';
		i++;
	}
	
	return 0;
}
