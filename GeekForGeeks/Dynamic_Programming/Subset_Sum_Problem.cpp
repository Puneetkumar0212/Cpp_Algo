#include<iostream>
using namespace std;
bool ssp(int a[] , int n,int sum)
{
	bool temp[n][sum+1];

	for(int i = 0 ; i< n ;i++)
		temp[i][0]=true;
	for(int h = 0 ; h <n ; h++)
		for(int k = 1 ; k <=sum ; k++)
		{
			if(a[h]<k)
				temp[h][k]=temp[h-1][k];
			else
				temp[h][k]=temp[h-1][k-a[h]]||temp[h-1][k];

		}

return temp[n-1][sum];
}

int main()
{
	int n,sum=0 ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
		{cin>>a[i];
			
		}
		cin>>sum;
		if(ssp(a,n,sum)==true)
			cout<<"true";
		else
			cout<<"false";
	return 0;
}