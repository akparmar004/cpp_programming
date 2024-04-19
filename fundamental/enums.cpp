#include<iostream>
using namespace std;

enum Pet
{
    cat,
    dog,
    pig,
    whale,
    lion,
    tiger,
};

enum Color
{
    black,
    red,
    blue,
};

int main()
{
    Pet myPet;
	cout << sizeof(myPet) << '\n';
    return 0;
}
