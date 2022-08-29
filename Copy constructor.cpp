// Copy constructor

#include<iostream>

using namespace std;

class Number{
	
	int a;
	
	public:
		Number()
		{
		   a=0;
		}
		
		Number(Number  &obj) // Copy Constructor 
		{
			cout<<"COPY CONSTRUCTOR CALLED"<<endl;
			a=obj.a;
		}
		
		Number(int x)
		{
			a=x;
		}
		
		void display()
		{
			cout<<"The value of the object is "<<a<<endl;
		}
		
};
	
int main()
{
	Number x,y,z(12);
	x.display();
	y.display();
	z.display();
	
	Number z1=z;
	z1.display();
	
	//When there is no declaration of copy constructor compiler has its default copy constructor.
	Number z2=z;
	z2.display();
	return 0;
	
	}	
