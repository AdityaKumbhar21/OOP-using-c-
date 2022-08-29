// Swapping the values of the classes.

#include<iostream>

using namespace std;

class c2;

class c1{
	
	int val1;
	
	public:
		void setVal(int a){

		val1=a;
		}
		
		void display()
		{
			cout<<val1;
		}
		
		friend void exchange(c1 &, c2 &);
		
};

class c2{
		
	int val2;
	
	public:
		void setVal(int a){

		val2=a;
		}
		
		void display()
		{
			cout<<val2;
		}
		
	friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y){
	
	int temp=x.val1;
	x.val1=y.val2;
	y.val2=temp;
}
/*
  Swapping logic:
  temp=a;
  a=b;
  b=temp;
  
*/



int main()
{
	c1 a;
	a.setVal(34);
	
	c2 b;
	b.setVal(54);
	
	exchange(a,b);
	
	cout<<"The value of a after swapping is "<<endl;
	a.display();
	cout<<"The value of b after swapping is "<<endl;
	b.display();
	return 0;
}
