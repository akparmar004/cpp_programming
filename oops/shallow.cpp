#include<iostream>
#include<cstring>
using namespace std;
//shallow copy using copy constructor..
class a
{
	char *name;
	public :
		a(){}
		a(const char *s)
		{
			name = new char[strlen(s) + 1];	
			strcpy(name, s);
		}
		
		void print()
		{
			cout << name << endl;
		}
		
		void modify()
		{	
			name[0] = 'l';
		}
		
};

int main()
{
	a a1("arjun"),a2(a1);
	a1.print();
	a2.print();
	a1.modify();
	cout << "after modify..\n";
	a1.print();
	a2.print();
	
	
}
