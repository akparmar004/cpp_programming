#include<iostream>
#include<cstring>
using namespace std;
class a
{
	public :
		a()
		{
			cout << "constructor" << this << endl;
		}
		~a()
		{
			cout << "destructor" << this << endl;
		}
};
int main()
{
	a a1,a2,a3,a4;
	cout << "&a1" << &a1 << endl;
	cout << "&a2" << &a2 << endl;
	cout << "&a3" << &a3 << endl;
	cout << "&a4" << &a4 << endl;
}
