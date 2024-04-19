#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A& setData(int a)
		{
			this->a = a;
			return *(this);
		}
		
		void getData()
		{
			cout << a << '\n';
		}
};
int main()
{
	A a;
	A b = a.setData(50);
	a.getData();
	b.getData();
	
	return 0;
}
