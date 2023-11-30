#include<iostream>
#include<cstring>
using namespace std;
//shallow copy using copy constructor..
class deep
{
	char *name;
	public :
		deep(){}
		deep(const char *s)
		{
			name = new char[strlen(s) + 1];	
			strcpy(name, s);
		}
		
		deep(deep &temp)
		{
			name = new char[strlen(temp.name) + 1];
			strcpy(name,temp.name);
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
	deep a1("arjun"),a2(a1);
	a1.print();
	a2.print();
	a1.modify();
	cout << "after modify..\n";
	a1.print();
	a2.print();
	
	
}
