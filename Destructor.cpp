// Destructor
// Destructor neither takes any arguments nor retruns any value.

#include<iostream>

using namespace std;

int count=0;
class num{
	
	public:
		num()
		{
			count++;
			cout<<"This is the time when constructor was called for the object number is "<<count<<endl;
		}
		
		~num()
		{
			cout<<" This is the time when destructor was called for the object number is "<<count<<endl;
			count--;
		}
};

int main()
{
		cout<<"Entering the main function"<<endl;
		cout<<"Creating the first object"<<endl;
		num n1;
	{
		cout<<"Entering the block"<<endl;
		cout<<"Creating more two objects"<<endl;
		num n2, n3;
		cout<<"Existing the block"<<endl; // destructor is called.
	}
	    cout<<"Back to main"<<endl;
    
   		 return 0;
}

