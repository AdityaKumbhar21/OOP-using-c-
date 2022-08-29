//Pointers , new and delete operator.

#include<iostream>

using namespace std;

int main()
{
	// BAsic Example of Pointer
	int a=4;
	int* ptr=&a;
	cout<<"The value of a is "<<*(ptr)<<endl;
	
	// New operator
	float *p= new float(99.99);
	cout<<"The value at address p is "<<*(p)<<endl;
	
	//Delete Operator
	int *arr=new int[3];
	arr[0]=11;
	arr[1]=22;
	arr[2]=33;
	delete[] arr;
	cout<<"The value of arr[0] is "<<arr[0]<<endl;
	cout<<"The value of arr[1] is "<<arr[1]<<endl;
	cout<<"The value of arr[2] is "<<arr[2]<<endl;
	return 0;
}
