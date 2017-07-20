#include<iostream>
using namespace std;
bool ssp(int a[] , int n,int sum)
{
	if(sum%2!=0||n==0||sum==0)
		return false;
	bool temp[n][sum+1],ans=false;

	for(int i = 0 ; i< n ;i++)
		temp[i][0]=true;
	for(int h = 0 ; h <n ; h++)
		for(int k = 1 ; k <=sum/2 ; k++)
		{
			if(a[h]<k)
				temp[h][k]=temp[h-1][k];
			else
				temp[h][k]=temp[h-1][k-a[h]]||temp[h-1][k];

		}
		sum=sum/2;

	ans = temp[n-1][sum];
return ans;
}

int main()
{
	int n,sum=0 ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
		{cin>>a[i];
			sum+=a[i];
		}
		
		if(ssp(a,n,sum)==true)
			cout<<"true";
		else
			cout<<"false";
	return 0;
}