#include<iostream>
using namespace std;

class a
{
	int cash;
	
	public :
		a(int);
		void get_data();
};

a::a(int b)
{
	cash = b;
}

void a::get_data()
{
	cout << "cash : " << cash << endl;
}

int main()
{
	a a1(200);
	a1.get_data();
}
