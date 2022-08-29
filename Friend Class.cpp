// Friend Class

#include<iostream>

using namespace std;

// Forward Declaration

class Complex;

class Calculator{
	public:
		
	int add(int a, int b)
	{
		 return (a+b);
	}
	
	int sumbyRealnumbers(Complex , Complex );
	int sumbycompnumbers(Complex , Complex );
		
};


class Complex{
	
	int a;
	int b;
	friend class Calculator;
	public:
		void setData(int v1, int v2)
		{
			a=v1;
			b=v2;
		}
		 void printnumbers()
	    {
	    	cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
	
};

int Calculator::sumbyRealnumbers(Complex o1 , Complex o2 ){
	
	return (o1.a+o2.a);
}
int Calculator:: sumbycompnumbers(Complex o1 , Complex o2 ){
	return (o1.b + o2.b);
}

int main()
{
	Complex b1, b2;
	
b1.setData(1,4);
b2.setData(4,5);

Calculator calc;
int res=calc.sumbyRealnumbers(b1,b2);
cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;

int resc=calc.sumbycompnumbers(b1,b2);
cout<<"The sum of the composite part of o1 and o2 is "<<resc<<endl;

    
    
    return 0;
}

