#include<iostream>
//family member function outside the class... 
using namespace std;
class family
{
	int cash, gold;
			
	public : 
		void setData();
		void getData();
};


int main()
{
	family s1,s2;
	s1.setData();
	s1.getData();
}

void family::setData()
{
	cout << "enter cash and gold : ";
	cin >> cash >> gold;
}

void family::getData()
{
	cout << "cash : " << cash << " gold : " << gold << endl;
}
