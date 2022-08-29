#include<iostream>

using namespace std;

class ShopItem{
	int id;
	float price;
	public:
		void SetData(int a,float b)
		{
			id=a;
			price=b;
		}
		
		void GetData(void)
		{
			cout<<"Code of the item is "<<id<<endl;
			cout<<"Price of the item is "<<price<<endl;
		}
};

int main()
{
	int size=3;
	ShopItem *ptr=new ShopItem[size];
	ShopItem *ptrTemp=ptr;
	int i,p;
	float q;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the Item id and price"<<endl;
		cin>>p>>q;
		ptr->SetData(p,q);
		ptr++;
	}
	
	for(i=0;i<size;i++)
	{
		ptrTemp->GetData();
		ptrTemp++;
		
	}
	
	return 0;
}
