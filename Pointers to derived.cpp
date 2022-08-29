// Pointers to Derived Class


#include<iostream>

using namespace std;
class BaseClass{
	int a;
	public:
		int var_base;
		void display()
		{
			cout<<"The value of var_base is "<<var_base<<endl;
		}
};
class DerivedClass: public BaseClass{
	int a;
	public:
		int var_derived;
		void display()
		{
			cout<<"The value of var_base is "<<var_base<<endl;
			cout<<"The value of var_derived is "<<var_derived <<endl;
		}
};
int main()
{
	class BaseClass * base_class_pointer;
	class BaseClass obj_base;
	class DerivedClass obj_derived;
	
	base_class_pointer=&obj_derived;
	base_class_pointer->var_base=45;
//	base_class_pointer->display();
	
	DerivedClass * derived_class_pointer;
	derived_class_pointer=&obj_derived;
	derived_class_pointer->var_derived=89;
	derived_class_pointer->display();
return 0;
}

