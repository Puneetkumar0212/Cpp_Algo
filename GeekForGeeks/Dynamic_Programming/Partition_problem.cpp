#include<iostream>
using namespace std;
bool pp(int a[] , int n,int sum)
{
	if(n==0||sum==0)
		return false;


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
		if(sum%2!=0)
			return ;
		else
			cout<<pp(a,n,sum/2);
	return 0;
}