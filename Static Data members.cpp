//Static Data Members and Methods 

#include<iostream>

using namespace std;



class Employee
{
	int id;
	static int count;
	
	public :
		void setData(void)
		{
			cout<<"Enter the employee id "<<endl;
			cin>>id;
			count++;
		}
		
		void getdata(void)
		{
			cout<<"The id of the employee is " <<id<< " an this employee no " <<count<<endl;
		}
		
		 static void getcount(void)
		{
			cout<<"The count of the employee is " <<count<<endl;		
			}
		
};

 int Employee :: count;
 
 int main()
 {
 	Employee aditya,rohan,rohit;
 	
 	aditya.setData();
 	aditya.getdata();
 	Employee :: getcount();
 	
 	rohan.setData();
 	rohan.getdata();
 	Employee :: getcount();
 	
 	rohit.setData();
	rohit.getdata();
	Employee :: getcount();
	
	return 0; 
 }
