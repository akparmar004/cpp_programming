#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	/*
	for(int i = 0;i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	*/
	

//	for(auto element : v)
//		cout << element << " ";
	
	vector<int> v2 (3,50);

	swap(v,v2);

	for(auto element : v)
		cout << element << " ";
	cout << '\n';

	for(auto element : v2)
		cout << element << " ";
	cout << '\n';
}
