#include<iostream>

using namespace std;

int main()
{
	int a;
	
	cout << "Enter a : ";
	cin >> a;
	//by default decimal flag is used..
	cout << "a in decimal " << dec << a << endl;
	cout << "a in octal " << oct << a << endl;
	cout << "a in hexadecimal " << hex << a << endl;
	//from here every value will print in hex cause we used hex flag last in above statement..	 
	
	int y = 300;
	cout << "y is : " << dec << y << endl;
	
	char name[] = "arjun";
	
	cout << name << endl;	
}
