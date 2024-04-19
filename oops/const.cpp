#include<iostream>
using namespace std;

class A
{
	int n;
	
	public:
		A()
		{
			n = 10;
		}
		
		A(int num)
			:n(num)	
		{}
		
		void print()
		{
			cout << "number is : " << n << '\n'; 
		}
};

int main()
{
//	A number;
	A number(50);
	number.print();
	
	return 0;
}
