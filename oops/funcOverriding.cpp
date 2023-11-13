#include<iostream>

using namespace std;

class parent{
	public:
		void print()
		{	
			cout << "hello everyone from parent.." << endl;
		}
};

class child : public parent{
	public:
		void print()
		{
			cout << "hello everyone from child.." << endl;
			//call from overriden func of parent..
			parent::print();
		}
};

int main()
{
	child hello;
	hello.print();
	return 0;
}
