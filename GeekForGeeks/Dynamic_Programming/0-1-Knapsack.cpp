#include<iostream>
using namespace std ;

struct item
{
	int value ;
	int weight;
}a[100];

int ks(item arr[] , int n ,int max_w )
{
	int a[n+1][max_w+1];

	for (int i = 0; i <=n; ++i)
	{
		for (int w = 0; w<=max_w ; ++w)
		{
			if(i==0||w==0)
				a[i][w]=0;
			else if (arr[i-1].weight<=w)
				a[i][w] = max(arr[i-1].value+a[i-1][w-arr[i-1].weight],a[i-1][w]);
			else
				a[i][w]=a[i-1][w];
		}
	}

return a[n][max_w];

}



int main()
{
	int n,w;
	cout<<"Enter Total Number of Items";
	cin>>n;
	for(int i = 0 ; i < n ; i++)
		cin>>a[i].weight>>a[i].value;
	cout<<"Enter Max weight";
	cin>>w;
	cout<<"Profit : "<<ks(a,n,w);

}