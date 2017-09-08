#include<iostream>
#include<climits>
using namespace std;


int main()
{
	int n ;
	cin>>n ;

	int a[n];
	int n_n=0,max_num =INT_MIN;
	for(int i = 0 ; i < n ; i ++)
		{cin>>a[i];if(a[i]<0) n_n++;if(max_num<a[i]){max_num=a[i];}}
	int max_sum_tillhere=0 ;
	int max_so_far=a[0];

	if(n!=n_n)
	for(int h = 0 ; h < n ; h ++)
	{
		max_sum_tillhere+=a[h];
		if(max_sum_tillhere<0)
			max_sum_tillhere=0;

		if(max_so_far<max_sum_tillhere)
		{
			max_so_far=max_sum_tillhere;
		}

	}
	else 
		max_so_far=max_num;
	cout<<max_so_far;
}