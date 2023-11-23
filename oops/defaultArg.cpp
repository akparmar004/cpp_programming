#include<iostream>
using namespace std;
int sum(int a,int b ,int c=10)//by default 100 will considered if c will not passing by user 
			      //and if passed by user then user provided will considered...
			//imp //it must initialiased from right most parameter..
{
	return a+b+c;
}


int main()
{
	cout << "sum of ints : " << sum(100,200) << endl;
	
	return 0;
}
