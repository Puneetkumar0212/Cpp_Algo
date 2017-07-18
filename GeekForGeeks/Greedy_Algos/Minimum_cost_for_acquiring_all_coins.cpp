#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a<b;
}

int main()
{
	int n ,k;
	cout<<"Enter Number of coins: ";
	cin>>n;
	cout<<"Enter K ";
	cin>>k;

	int a[n],ans = 0 ;
	
	for(int i = 0 ; i < n ; i ++)
	{
		cin>>a[i];
	} 

	std::sort(a,a+n,compare);
	
	int coins =  ceil(1.0*n / (k+1));
	//cout<<coins<<"\n";
	for(int i = 0 ; i <coins ; i++)
	{
		//cout<<a[i]<<"\t";
		ans+=a[i];
	}



	cout<<ans;

}