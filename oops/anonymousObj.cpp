
// C++ program to illustrate the 
// concept of anonymous object 
#include <iostream> 
using namespace std; 
  
class hi{ 
    // Private datamembers 
    int a, b; 
  
public: 
    // Constructor 
    hi() { cout << "Default Constructor Executed\n"; } 
  
    hi(int a1, int b1) 
    { 
        cout << "Parameterised Constructor Executed\n"; 
        a = a1; 
        b = b1; 
    } 
  
    // Destructor 
    ~hi() { cout << "Destructor Executed\n"; } 
}; 
  
// Driver Function 
int main() 
{ 
    // Creation of  Anonymous Object 
    hi({ 2, 3 }); 
    // Creation of  Anonymous Object 
    hi({4, 5 }); 
    return 0; 
}
