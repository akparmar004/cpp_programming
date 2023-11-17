#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	wchar_t ch[10] = {0x0A86,0x0A87};
	wcout << ch << endl;
	return 0;
}
