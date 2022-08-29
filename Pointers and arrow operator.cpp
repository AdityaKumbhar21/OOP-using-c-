#include<iostream>

using namespace std;

class Complex{
	int real,imaginary;
	public:
		void setData(int a, int b)
		{
			real=a;
			imaginary=b;
		}
		
		void getData()
		{
			cout<<"The real part is "<<real<<endl;
			cout<<"The imaginary part is "<<imaginary<<endl;
		}
};

int main()
{
	Complex *ptr = new Complex;
	// The arrow operator works exactlyy same as (*ptr).setData(1,4);
	ptr->setData(1,4);
	ptr->getData();
}
