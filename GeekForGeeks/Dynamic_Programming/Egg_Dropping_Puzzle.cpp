#include<iostream>
#include<climits>
using namespace std ;
int edp(int n ,int k )
{
	int a[n+1][k+1],ans;
	for(int i = 1 ; i <=n ; i++)
	{
		a[i][1]=1;
		a[i][0]=0;
	}
	for(int j = 1 ; j <= k ;j++)
		a[1][j]=j;

	for (int i = 2; i <=n ; ++i)
	{
		for (int j = 2; j <=k; ++j)
		{
			a[i][j] = INT_MAX;
			for(int x = 1 ; x<=j ; x++)
			{
				ans = 1 + max(a[i-1][x-1],a[i][j-x]);
				if(ans<a[i][j])
					a[i][j]=ans;
			}
			}
		
		}
	
return a[n][k];	



}

int main()
{
	int n , k ;
	cout<<"Enter Number of eggs :";
	cin>>n;
	cout<<"\nEnter number of floors";
	cin>>k;

	cout<<edp(n,k);
	return 0;



}