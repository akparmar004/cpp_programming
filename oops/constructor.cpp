#include<iostream>
using namespace std;
class a
{
	int cash;
	public :		
		a();
		void get_data();
};
		
a::a()
{
	cout << "in class a." << endl;
	cash = 100;
}

void a::get_data()
{
	cout << "cash : " << cash << endl;
}
	


int main()
{
	a a1;
	a1.get_data();
}
