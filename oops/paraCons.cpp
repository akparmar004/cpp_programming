#include<iostream>
using namespace std;

//constructor overloading 
//constructor with same name and having different numbers of arguments..
class a
{
	int cash;
	
	public :
		a();
		a(int);
		void get_data();
};

a::a()
{
	cout << "default cons." << endl;
	cash = 100;
}
a::a(int b)
{
	cout << "parameterized cons." << endl;
	cash = b;
}

void a::get_data()
{
	cout << "cash : " << cash << endl;
}

int main()
{
	a a1,a2(200);
	a1.get_data();
	a2.get_data();
}
