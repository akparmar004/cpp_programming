#include<iostream>
using namespace std;

class a
{
	int cash;
	
	public :
		a();
		a(int);
		void get_data();
};
//member variable initialization
a::a():cash(220)
{
	cout << "default cons." << endl;
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
	a a1,a2(200),a3(a2);
	a1.get_data();
	a2.get_data();
	a3.get_data();
}
