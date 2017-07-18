#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a<b;
}

int main()
{
	int n ;
	cout<<"Enter Number of elements: ";
	cin>>n;

	int a[n];
	int ans =1 ;
	for(int i = 0 ; i < n ; i ++)
	{
		cin>>a[i];
	} 

	std::sort(a,a+n,compare);
	int prev_width = a[0];
	int prev_count =1 ;
	int curr_width = 0 ;
	int curr_count = 0 ;



	for(int h = 1 ; h < n ; h++)
	{
		curr_count++;
		curr_width += a[h];
		if(curr_width>prev_width&&curr_count>prev_count)
		{
			prev_count = curr_count;
			prev_width = curr_width;
			curr_width=0;
			curr_count=0;
			ans++;
		}
	}
	cout<<ans;

}