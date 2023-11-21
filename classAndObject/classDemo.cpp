#include<iostream>
using namespace std;

class cl
{
//by default it's private data;
public:
	int id;
	string name;
	void set_data()
	{
		cout << "enter id and name : ";
		cin >> id >> name;
	}
	void get_data()
	{
		cout << "id - "<< id << " name - " << name << endl;
	}
};

int main()
{
	cl std;
	cout << sizeof(std) << endl;
	std.set_data();
	std.get_data();  
	return 0;
}
