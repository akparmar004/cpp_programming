#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int> marks;
	marks["arjun"] = 100;
	marks["harry"] = 98;
	marks["rohan"] = 99;

	marks.insert({{"ram",100},{"hari",100}});
	map<string,int> :: iterator it;

	for(it = marks.begin(); it != marks.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << "\n";
	}	

	return 0;
}
