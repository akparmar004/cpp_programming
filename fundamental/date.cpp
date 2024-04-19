#include<iostream>
using namespace std;

struct date
{
	int date;
	int month;
	int year;
	
	void print()
	{
		cout << date << "/" << month << "/" << year << "\n";
	}
};



int main()
{
	date d = {1, 4, 2024};
	d.print();
	cout << sizeof(struct date) << endl;
	return 0;
}
