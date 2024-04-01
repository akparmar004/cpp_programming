#include <iostream>
#include <string>
using namespace std;
void incr(int& a)
{
	a++;
}

int main()
{
        int i = 10;
	incr(i);
	cout << i << '\n';             
    return 0;
}
