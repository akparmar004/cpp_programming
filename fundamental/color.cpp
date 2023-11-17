#include<iostream>
using namespace std;
#define red "\033[31;1m"
#define green "\033[32;41;4m"
#define cyan "\033[36m"
#define reset "\033[0m"

int main()
{
	wcout << red << "Hello everyone..." << endl;
	wcout << green << "How are you.." << endl;
	wcout << cyan << "all good....." << endl;
	wcout << reset << "c++ programming.!!" << endl;
	return 0;
}
