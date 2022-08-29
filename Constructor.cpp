//Constructor

#include<iostream>

using namespace std;

class Complex{
	
	int a,b;
	
	public:
		
		Complex(void);
		 void printnumbers()
	    {
	    	cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex::Complex()
{
	a=10;
	b=20;
}

int main()
{
	Complex c;
	c.printnumbers();
	
	return 0;
}
