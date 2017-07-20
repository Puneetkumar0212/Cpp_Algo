#include<iostream>
using namespace std;
struct pair1
{
	int start ;
	int end;
};
int max(int i , int j )
{
	if(i>j)
		return i ;
	else
	return j;
}
int find_lis(pair1 a[] , int n)
{
	int temp[n];
	for(int i = 0 ; i <n ;i++)
		temp[i]=1;
	for(int i = 1 ; i < n ; i ++)
	{
		for(int j=0 ; j<i;j++)
		{					
			if(a[i].start>a[j].end)
				{
					temp[i]=max(temp[i],(temp[j]+1));
				}
		}
		
	}
	int max = temp[0];
	for(int i = 1 ; i < n ; i ++)
	{
		if(temp[i]>max)
			max = temp[i];
	}

	return max;
}



int main()
{
	cout<<"Enter N :";
	int n ;
	cin>>n;
	pair1 temp[n];
	for(int i = 0 ; i< n ; i ++)
		cin>>temp[i].start>>temp[i].end;
	cout<<find_lis(temp,n);
}