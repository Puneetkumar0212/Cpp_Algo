#include<iostream>
using namespace std;

//When only single digits are saved !



int main()
{
	int arr[] = {1,2,3,4,5,5,3,6};
	int digits[]={0,0,0,0,0,0,0,0,0,0};

	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0 ; i < size ; i ++)
	{
		digits[arr[i]]++;
	}
	for(int i = 9 ; i >=0; i --)
	{
		while(digits[i]--)
		{
			cout<<i;
		}
	}



}