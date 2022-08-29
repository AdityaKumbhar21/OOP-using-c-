//Memory Allocation And Arrays in OOPS


#include<iostream>

using namespace std;

class Shop
{
	int itemid[100];
	int itemprice[100];
	int counter;
	
	public:
		void initcounter(void)
		{
		   counter=0;
		}
		void setprice(void);
		void displayprice(void);
		
};

void Shop :: setprice(void)
{
	cout<<"Enter the item Id "<<counter+1<<endl;
	cin>>itemid[counter];
	cout<<"Enter the price of the item"<<endl;
	cin>>itemprice[counter];
	counter++;
}

void Shop :: displayprice(void)
{
	for(int i=0;i<counter;i++)
	{
		cout<<"The price of the item Id " << itemid[i]<< " is " <<itemprice[i]<<endl;
			
		
	}
}

int main()
{
	Shop General;
	General.initcounter();
	General.setprice();
    General.setprice();
    General.setprice();
	General.setprice();
	General.displayprice();  
}

