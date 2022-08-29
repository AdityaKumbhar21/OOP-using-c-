//Classes Priavte and Public


#include<iostream>

using namespace std;



class Employee
{
    private:    // Private class user doesn't ha access to it.
        int a, b, c;
    public:    //user has the access.
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1)  // Declaration of the Function declared in public class.
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
   Employee Aditya;
   Aditya.d=2;
   Aditya.e=4;
   Aditya.setData(1,2,3);
   Aditya.getData();

return 0;
}
