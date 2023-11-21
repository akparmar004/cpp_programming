#include<iostream>
using namespace std;

class a{
	int cash;
	int gold;
	int a;
	public : 
		void set_data()
		{
			cout << "enter cash and gold : ";
			cin >> cash >> gold;
		}
		
		void get_data()
		{
			cout << "cash : " << cash << " gold : " << gold << endl;
		}
};

int main()
{
	a a1,a2;
	a1.set_data();	
	a2.set_data();
	a1.get_data();
	a2.get_data();
	cout << sizeof(a1) << endl;
}
