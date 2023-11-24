#include<iostream>
using namespace std;

class family
{
	int cash,gold;
	
	void setData();
	void getData();
	
	friend int main();
};

void family::setData()
{
	cin >> cash >> gold;
}

void family::getData()
{
	cout << cash << " " << gold << endl;
}

int main()
{
	family f;
	f.setData();
	f.getData();
	return 0;
}
