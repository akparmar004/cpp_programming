//defining structure..
#include<iostream>
using namespace std;
struct Fraction
{
	int numerator {};
	int denominator {};
	int a{};
};

// Now we can make use of our Fraction type
int main()
{
	Fraction f { 3, 4, 5}; // this actually instantiates a Fraction object named f
	cout << f.numerator << '\n';
	cout << sizeof(f) << '\n' << sizeof(f.numerator) << '\n';
	return 0;
}
