#include<iostream>
#include<algorithm>
using namespace std;
bool compare (int a , int b)
{
	return a<b;
}
int diff(int i , int j )
{
	if(i>j)
		return i-j;
	return j-i;
}
int main()
{
	int n ,sum=0;
	cin>>n ;
	int a[n],b[n];

	for(int i = 0 ; i< n ; i++)
	{
		cin>>a[i];
	}
	for(int i = 0 ; i< n ; i++)
	{
		cin>>b[i];
	}
	std::sort(a,a+n,compare);
	std::sort(b,b+n,compare);
	for(int h = 0 ; h < n ; h ++)
		sum+=diff(a[h],b[h]);
cout<<sum;
}