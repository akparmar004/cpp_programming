#include<iostream>
using namespace std;
namespace greet
{
	void func()
	{
		cout << "Hello there..!!" << endl;
	}
}

namespace greet_name
{
	char name[10];
	void func()
	{
		cout << "enter your name please.!!  ";
		cin >> name;
		cout << "Hello " << name << ".."<< endl;
	}
}
using namespace greet_name;
int main()
{
	func();
	return 0;
}
