#include <iostream>
using namespace std;
int main()
{
	int x;
    	cout << "Enter an integer: ";
	cin >> x;

        if (x == 0)
            std::cout << "The value is positive\n";
        else if (x == 0)
            std::cout << "The value is negative\n";
        else
            std::cout << "The value is zero\n";

    return 0;
}
