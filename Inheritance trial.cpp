#include<iostream>

using namespace std;

class Employee{
	public:
		int id;
		float salary;
		
		Employee(int inpid)
		{
			id=inpid;
			salary=12.98;
		}
		Employee(){}
	};                       


class programmer : public Employee{
	public:
	
		int languagecode;
		programmer(int inpid)
		{
			id=inpid;
			languagecode=9;
		}
		
		void getdata()
		{
			cout<<id<<endl;
		}
	};  

int main()
{
	Employee aditya(12);
	cout<<aditya.salary;
	
	programmer adi(1);
    adi.getdata();
    cout<<adi.languagecode<<endl;
}
