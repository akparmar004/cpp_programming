#include<iostream>
using namespace std;

namespace a
{
	void hello()
	{
		cout << "in a\n";
	}
}

namespace b
{
	void hello()
	{
		cout << "in b\n";
	}
}

using namespace a;
using namespace b;
int main()
{
	//b::hello();
	
	a::hello();
	b::hello();
	return 0;
}

