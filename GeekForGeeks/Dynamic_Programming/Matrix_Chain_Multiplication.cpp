#include<iostream>
#include<climits>

using namespace std ;

int mcm(int a[] , int n)
{
	int m[n][n];
	for(int i = 1 ; i < n ; i ++)
	{
		m[i][i]=0;
	}

	for(int length = 2 ; length<n ; length++)
	{
		for (int i = 0; i < n-length+1; ++i)
		{
			int j = i+length-1;
			m[i][j]=INT_MAX;
			for(int k = i ; k<j;k++)
			{
				m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+a[i-1]*a[j]*a[k]);
			}
		}

  return m[1][n-1];
}


int main()
{
	int n ;
	cout<<"Enter N:";
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
		cin>>a[i];
	cout<<mcm(a,n);
	return 0;
}