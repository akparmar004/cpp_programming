#include<iostream>
using namespace std;
int main()
{
	//char s[20];
	string s;
	//cin >> s; //without space
	cout << sizeof(s) << endl;
	cout << "enter string - ";
	getline(cin,s);
	//cin.getline(s,50); //with space
	cout << "string - " << s << endl;
	return 0;
}
