#include<iostream>
using namespace std;

class complex
{	
	int real;
	int img;
	
	public : 
	void set_data(int r,int i)
	{
		real = r;
		img = i;
	}
	
	void get_data()
	{
		cout << "complex numbers : ";
		if(img < 0)
			cout << real << img << "j" << endl;
		else
			cout << real << "+" << img << "j" << endl;
	}
	
	void addition1(complex a,complex b)//internally addition(complex *this,complex a,complex b)
	{
		cout << "call by object : " << endl;
		real = a.real + b.real;
		img = a.img + b.img;	
	}
	void addition2(complex &a,complex &b)//internally addition(complex *this,complex a,complex b)
	{
		cout << "call by reference : " << endl;
		real = a.real + b.real;
		img = a.img + b.img;	
	}
	void addition(complex *p1,complex *p2)
	{
		cout << "call by address : " << endl;
		real = p1 -> real + p2 -> real;
		img = p1 -> img + p2 -> img;
	}
};

	
int main()
{
	complex c1,c2,c3,c4;
	c1.set_data(10,20);
	c2.set_data(100,200);
	c3.addition1(c1,c2);//complex::addition(&c3,c1,c2)
	c4.addition2(c1,c2);
	c3.get_data();
	c4.get_data();
}
