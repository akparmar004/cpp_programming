#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
float sum(float a,float b)
{
	return a+b;
}
char sum(char a,char b)
{
	return a+b;
}

int main()
{
	cout << "sum of ints : " << sum(10,20) << "\nsum of floats : " << sum(10.1f,10.2f) << endl;
	cout << "sum of chars : " << sum('0','1') << endl;
	return 0;
}
