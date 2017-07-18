#include<iostream>

using namespace std;
int min(int x, int y, int z)
{
if (x < y)
	return (x < z)? x : z;
else
	return (y < z)? y : z;
}

int mcp(int a[100][100],int n ,int start , int end)
{
	int temp[n][n];
	temp[0][0]=a[0][0];
	for(int i = 1; i < n  ; i ++)
		{temp[0][i]=temp[0][i-1]+a[0][i];
			temp[i][0] = temp[i-1][0] +a[i][0];}


	for(int i = 1 ; i <=start; i ++)
		for(int j =  1; j <=end; j ++)
		{
			temp[i][j]= min(temp[i-1][j-1], 
						temp[i-1][j], 
						temp[i][j-1]) + a[i][j];
		}

// cout<<"\n";
// 	for(int i = 0; i < n ; i ++)
// 	{	for(int j =  0; j < n ; j ++)
// 		{
// 			cout<<temp[i][j]<<" ";
// 		}
// 		cout<<"\n";
// }
	return temp[start][end];
}

int main()
{
	int n,start,end ;
	cin>>n >>start>>end;
	int a[100][100];
	for(int i = 0 ; i < n ; i ++)
		for(int j = 0 ; j < n ; j ++)
			cin>>a[i][j];
	cout<<mcp(a,n,start,end);	
}