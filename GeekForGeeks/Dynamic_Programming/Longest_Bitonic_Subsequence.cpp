#include<iostream>
using namespace std;
int max(int i , int j )
{
	if(i>j)
		return i ;
	else
	return j;
}
int find_lis(int a[] , int n)
{
	int temp[n],temp2[n];
	for(int i = 0 ; i <n ;i++)
		{temp[i]=1;temp2[i]=1;}
	for(int i = 1 ; i < n ; i ++)
	{
		for(int j=0 ; j<i;j++)
		{					
			if(a[i]>a[j])
				{
					temp[i]=max(temp[i],(temp[j]+1));
				}
		}
		
	}
	 for (int i = n-2; i >= 0; i--)
      for (int j = n-1; j > i; j--)
         if (a[i] > a[j] )
           temp[i]=max(temp[i],(temp[j]+1));




	int max = temp[0]+temp2[0]-1;
	for(int i = 1 ; i < n ; i ++)
	{
		if(temp[i]+temp2[i]-1>max)
			max = temp[i]+temp2[i]-1;
	}

	return max;
}



int main()
{
	cout<<"Enter N :";
	int n ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i< n ; i ++)
		cin>>a[i];
	cout<<find_lis(a,n);
}