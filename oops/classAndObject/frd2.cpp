#include<iostream>
using namespace std;

class family
{
	int cash,gold;
	
	void setData();
	
	friend int main();
	friend void getData(family);
};


void family::setData()
{
	cout << "enter cash and gold : ";
	cin >> cash >> gold;
}

//non member function :-
void getData(family f)
{
	cout << "non member function get data : ";
	cout << "cash : " << f.cash << " gold : " << f.gold << endl;
	
}

int main()
{
	family f;
	f.setData();
	getData(f);
	return 0;
}
