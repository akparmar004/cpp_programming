#include<iostream>
using namespace std;

int add(int x, int y) // integer version
{
    return x + y;
}

double add(double x, double y) // floating point version
{
    return x + y;
}

int main()
{
    int a = add(1,2);
    cout << a << '\n';
    return 0;
}
