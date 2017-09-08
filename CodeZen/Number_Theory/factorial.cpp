//Find FACTORIAL OF NUMBER  > 50 
//use ARRAY 


#include<iostream>
using namespace std ;

int reset (int a[] , int size , int n)
{
	int carry = 0,product ;

	for (int i = 0; i < size; i++)
	{
		product = a[i]*n+carry;
		a[i]=product%10;
		carry = product/10;
	}
	
	while(carry)
	{
		a[size] =  carry%10;
		carry= carry/10;
		size++;
	}
return size;
}


void factorial(int n )
{
	int a[10000]={0};
	a[0]=1;
	int a_size = 1;
	//update array 
	for(int i = 2 ; i<=n ; i++)
	{
		a_size = reset(a,a_size,i);
	}
	//Display Result
	for(int h = a_size-1 ; h >=0 ; h --)
	{
		cout<<a[h];
	}
}

int main()
{

	factorial(1000);
	return 0 ;
}