#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	
	{
		int x = 20;
		
		cout << "in nested block x : " << x << endl; 
	}
	
	cout << "outside block x : " << x << endl;
}
