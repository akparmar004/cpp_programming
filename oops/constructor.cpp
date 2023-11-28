#include<iostream>
using namespace std;
class a
{
	public :
		int cash;
		
		void get_data()
		{
			cout << "cash : " << cash << endl;
		}
	
};

int main()
{
	a a1 = {100};
	a1.get_data();
}
