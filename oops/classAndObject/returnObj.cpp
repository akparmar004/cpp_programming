#include<iostream>
using namespace std;

class complex
{
	int real,img;
	
	public : 
		void set_data(int r,int i)
		{
			real = r,img = i;
		}
		
		void get_data()
		{
			cout << "complex numbers : ";
			if(img < 0)
			{
				cout << real << img << "j" << endl;
			}
			else
			{
				cout << real << "+" << img << "j" << endl;
			}
		}
		
		complex addition1(complex temp)
		{
			cout << "return type object : " << endl;
			complex ret;
			
			ret.real = real + temp.real;
			ret.img = img + temp.img;
			
			return ret;
		}
		complex* addition2(complex temp)
		{
			cout << "return type address of an object : " << endl;
			static complex ret;
			
			ret.real = real + temp.real;
			ret.img = img + temp.img;
			
			return &ret;
		}
};

int main()
{
	complex c1,c2,c3,*c4;
	c1.set_data(10,20);
	c2.set_data(100,200);
	c1.get_data();
	c2.get_data();
	c3 = c1.addition1(c2); // c3 = complex::addition1(&c1,c2);
	c3.get_data();
	c4 = c1.addition2(c2);// c4 = complex::addition1(&c1,c2);
	c4->get_data();
}
