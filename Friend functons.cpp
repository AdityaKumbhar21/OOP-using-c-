// Friend Functions 


#include<iostream>

using namespace std;

class Complex{
	
	int a;
	int b;
	
	public:
		void setData(int v1, int v2)
		{
			a=v1;
			b=v2;
		}
		// friend should be declared in the respective class (Public or Private both are valid).
	     friend Complex sumComplex(Complex o1, Complex o2);
	
	    void printnumbers()
	    {
	    	cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
	
};

Complex sumComplex(Complex o1, Complex o2)  // This is the friend function.
{
	Complex o3;
	o3.setData((o1.a+o2.a) ,( o1.b+o2.b));
	return o3;
}

int main()
{
	Complex b1, b2, sum;
    
    b1.setData(1,2);
    b1.printnumbers();
    
    b2.setData(3,4);
    b2.printnumbers();
    // Friend function cannot be accessed directly as the normal function so it should be declared by using refernece variable.
   sum = sumComplex(b1,b2);  
   sum.printnumbers();
    
    return 0;
}

