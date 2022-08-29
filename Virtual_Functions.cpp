#include<iostream>
using namespace std;
class BaseClass{
	public:
		int var_base=1;
		virtual void display()
		{
			cout<<"The value of var_base is "<<var_base<<endl;
		}
};
class DerivedClass: public BaseClass{
	public:
		int var_derived=2;
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
	base_class_pointer->display();
return 0;
}

