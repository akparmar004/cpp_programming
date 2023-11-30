#include<iostream>
#include<cstring>
using namespace std;
class a
{
	char *name;
	public :
		a()
		{
			cout << "constructor..\n";
			name = new char[20];
			strcpy(name,"Arjun Parmar..");
		}
		~a()
		{
			cout << "destructor..\n";
			delete [] name;
		}

};
int main()
{
	a a1;
}
