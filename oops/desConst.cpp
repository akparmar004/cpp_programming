#include<iostream>
#include<cstring>
using namespace std;
class a
{
	int b,cash;
	public :
		a()
		{
			cout << "constructor - " << this << endl;
		}
		void set_data()
		{
			cout << "enter cash : ";
			cin >> cash;
		}
		void get_data() const
		{
			//cash = 100;//invalid
			cout << cash << endl;
		}
		~a()
		{
			cout << "destructor - " << this << endl;
		}
};
int main()
{
	a a1;/*a1,a2,a3,a4;
	cout << "&a1 - " << &a1 << endl;
	cout << "&a2 - " << &a2 << endl;
	cout << "&a3 - " << &a3 << endl;
	cout << "&a4 - " << &a4 << endl;*/
	
	a1.set_data();
	a1.get_data();
}
