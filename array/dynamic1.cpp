#include<iostream>
using namespace std;
int main()
{
	int *p;
	p = new int[5]{1,2,3,4,5};
	cout << "enter array elements : ";
	//for(int i = 0;i < 5;i++)
	//{
	//	cin >> p[i];
	//}
	for(int i = 0;i < 5;i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete [] p;
	return 0;
}
