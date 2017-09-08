#include<iostream>
using namespace std ;
int fun(int num)
{
	int temp = num ;
	int sum=0;
	while(temp!=0)
	{
		sum+=temp%10;
		temp = temp/10;
	}
	return sum;
}
int main()
{
	int n ;
	cin>>n ;
	int num;
	int max = 0 ;

	cin>>num;
	max = fun(num);
	for(int i = 1 ; i < n ; i ++)
	{
		cin>>num;
		max = (max>fun(num)?max:num);
	}

	cout<<max;
}