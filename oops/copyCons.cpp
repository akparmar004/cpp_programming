#include<iostream>
using namespace std;

class a
{
	int cash;
	
	public :
		a();
		a(int);
		a(a&);
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
a::a(a &obj)
{
	cout << "copy constructor.." << endl;
	cash = obj.cash;
}

void a::get_data()
{
	cout << "cash : " << cash << endl;
}

int main()
{
	a a1,a2(200),a3(a1),a4 = a1,a5;
	a5 = a2;
	a1.get_data();
	a2.get_data();
	a3.get_data();
	a4.get_data();
	a5.get_data();
}
