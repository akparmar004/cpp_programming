#include<iostream>
using namespace std;

class a
{
	int cash, gold;
	
	public : 
		void setdata()
		{
			cout << "enter cash and gold : ";
			cin >> cash >> gold;
		}	
		void getdata()
		{
			cout << "cash : " << cash "\ngold : " << gold << endl;
		}
};

class b
{
	
	public : 
		void getdata1(a obj)
		{
			cout << a.cash << " and " << a.gold << endl;
		}
		void getdata2(a obj)
		{
			cout << a.cash << " and " << a.gold << endl;
		}
		void gerdata3(a obj)
		{
			cout << a.cash << " and " << a.gold << endl;
		}			
};

int main()
{
	a a1;
	b b1;
	b.getdata1(a1);
	
	return 0;
}
