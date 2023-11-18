#include<iostream>
using namespace std;
int main()
{
	int *p;
	//p = (int*)malloc(sizeof(int));
	//p = new int;
	int n;
	cin >> n;
	p = new int(n);
	cout << "enter number - ";
	//cin >> *p;
	cout << "*p = " << *p << endl;
	//free(p);
	delete p;
	return 0;
}
