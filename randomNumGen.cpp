#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	for(int i = 0;i < 5;i++)
		cout << (rand()%6)+1 << '\n';

	return 0;
}
