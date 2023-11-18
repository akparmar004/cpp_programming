
#include<iostream>
using namespace std;
int main()
{
	string s1("Arjun"),s2(" Parmar"),s3;
	s3 = s1 + s2;
	cout << s3 << endl;
	
	for(int i = 0; s3[i]; i++){
		cout << s3[i] << endl;
	}
	cout << "string length - " << s3.length() << endl; 
	return 0;
}
