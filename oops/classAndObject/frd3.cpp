#include<iostream>
using namespace std;
class son;
class father
{
	//data members..
	char name[20];
	float sal;
	
	//member function..
	public :
		void set_data()
		{
			cout << "enter father name and sal : ";
			cin >> name >> sal;
		}
		
		void get_data()
		{
			cout << "father name : " << name << "\nfather salary : " << sal << endl;
		}
	friend void income_tax(father, son);
};

class son
{
	//data members..
	char name[20];
	float sal;
	
	//member function..
	public :
		void set_data()
		{
			cout << "enter son name and sal : ";
			cin >> name >> sal;
		}
		
		void get_data()
		{
			cout << "son name : " << name << "\nson salary : " << sal << endl;
		}
	friend void income_tax(father, son);
};

//non member function..
void income_tax(father f, son s)
{
	float total;
	total = f.sal + s.sal;
	if(total <= 50000)
		cout << "no need to pay tax" << endl;
	else
		cout << "pay 15% from your salary" << endl;	
}

int main()
{
	father f1;
	son s1;
	
	f1.set_data();
	s1.set_data();
	
	income_tax(f1,s1);
}
