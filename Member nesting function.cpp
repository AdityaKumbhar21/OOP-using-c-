//Memeber Nesting Functions


#include<iostream>
#include<string>

using namespace std;

class binary
{
	string s;
	
	public :
		void read(void);
		void chk_bin(void);
		void ones_compliment(void);
		void display(void);
		
};

void binary ::  read(void)
{
	cout<<"Enter a binary number"<<endl;
	cin>>s;

}

void binary ::  chk_bin(void)
{
		for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!= '0' && s.at(i)!='1')
		{
			cout<<"Incorrect binary Format"<<endl;
			
		}
	}
	
	
}
void binary :: ones_compliment(void)
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='1')
		{
			s.at(i)='0';
		}
		else
		{
			s.at(i)='1';
		}
	}
}

void binary :: display(void)
{
	cout<<"Displaying your binary number"<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i)<<endl;
		//Endl;
	
	}
	
}



int main()
{
	binary a;
	a.read();
	a.chk_bin();
	a.display();
	a.ones_compliment();
	a.display();
	return 0;
}
