#include<iostream>
using namespace std;

class a{
	int cash;
	int gold;
	
	public : 
		void set_data()
		{
			cout << "set data - " << this << endl;
			cout << "enter cash and gold : ";
			cin >> cash >> gold;
		}
		
		void get_data()
		{
			cout << "get data - " << this << endl;
			cout << "cash : " << cash << " gold : " << gold << endl;
		}
};

int main()
{
	a a1,a2;
	cout << "a1 address - " << &a1 << endl;
	cout << "a2 address - " << &a2 << endl;
	a1.set_data();	
	a2.set_data();
	a1.get_data();
	a2.get_data();
	cout << sizeof(a1) << endl;
}
