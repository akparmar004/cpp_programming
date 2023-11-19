#include<iostream>
using namespace std;
int sum(int a,int b,int c = 100)//by default 100 will considered if c will not passing by user 
				//and if passed by user then user provided will considered...
{
	return a+b+c;
}


int main()
{
	cout << "sum of ints : " << sum(10,20) << endl;
	
	return 0;
}
