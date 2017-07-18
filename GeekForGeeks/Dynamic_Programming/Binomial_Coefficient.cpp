
#include<iostream>
using namespace std ;
int bc(int n ,int r)
{
	int temp[n+1][r+1];
	for(int i = 0 ; i<=n;i++)
	{
		for(int j =0 ; j <=i ; j++)
		{
			if(i==j)
				temp[i][j]=1;
			else if(j==0)
				temp[i][j]=1;
			else
				temp[i][j]=temp[i-1][j]+temp[i-1][j-1];
		}
	}

	return temp[n][r];
}




int main()
{
	int n , r ;
	cout<<"N:";
	cin>>n;
	cout<<"R:";
	cin>>r;
	cout<<bc(n,r);
	return 0;
}