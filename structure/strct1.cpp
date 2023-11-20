#include<iostream>
using namespace std;

struct st{
	//if stuct has no data members then it's size will be 1 byte
	void func()
	{
		int x; //it will not count cause it's a variable of function..
		cout << "hello everyone..." << endl;
	}
};

int main()
{
	struct st hi;
	hi.func();
	cout << sizeof(hi) << endl;
	return 0;
}
