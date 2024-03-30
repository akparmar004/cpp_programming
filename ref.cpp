#include <iostream>

int main()
{
    int x { 5 };
    int& ref = x;
    int& ref1 = ref;
    std::cout << ref1 << '\n'; // prints value of x (5)

    return 0;
} 
