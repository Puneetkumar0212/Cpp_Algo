#include<iostream>
using namespace std;
int fun(int n,int m  )
{

	if(n<=1)
		return 1 ;

	int a[n+1][m+1]={{0}};
	for(int i = 1 ; i<=n ; i ++)
		{a[i][0]=0;a[i][1]=1;}
	for(int i = 1 ; i<=m ; i ++)
		a[1][i]=1;

	for(int i = 2; i <=n ; i ++)
		for(int j = 2; j <=m ; j++)
			if(i>j)
			a[i][j]= a[i-1][j-1]+a[i-1][j+1];
			else if(i==j)
			a[i][j]=a[i][j-1]+1;
			else
				a[i][j]=a[i][j-1];

for(int i = 1; i <=n ; i ++)
		{for(int j = 0 ; j <=m ; j++)
			cout<<a[i][j]<<" ";
			cout<<"\n";
		}

return a[n][m];
}


int main()
{
	int n , m ; 
	cin>>n>>m;
	cout<<fun(n,m);

}