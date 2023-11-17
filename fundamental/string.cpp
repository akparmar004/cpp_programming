#include<iostream>
using namespace std;
int main()
{
	char s[20];
	cout << "enter string - ";
	//cin >> s; //without space
	cin.getline(s,50); //with space
	cout << "string - " << s << endl;
	return 0;
}
