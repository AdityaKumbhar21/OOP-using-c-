// Arrays in OOPS

#include<iostream>

using namespace std;

class Employee{
	
	int id;
	int salary;
	
	public:
	//	int salary=122;
		
		void setid(void)
		{
			cout<<"Enter the id of the employee "<<endl;
			cin>>id;
			
		}
		
	void getid(void)
	{
		cout<<"The id of the employee is "<<id<<endl;
	}
};

int main()
{
	Employee AK[4];  //Numbers of employee are declared in array to make code short and understandable.
	for(int i=0;i<4;i++)  // For loop is used rather than just writing the employees for 4 times.
	{
		AK[i].setid();
		AK[i].getid();
	}
	
	return 0;
}
