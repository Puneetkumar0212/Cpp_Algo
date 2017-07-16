/*
An efficient solution is to use Greedy approach. 
The basic idea of greedy approach is to calculate the ratio value/weight for each item and sort the item on basis of this ratio.
Then take the item with highest ratio and add them until we can’t add the next item as whole and at the end add the next item as much as we can. 
Which will always be optimal solution of this problem.

*/


#include<iostream>
#include<algorithm>
using namespace std;
struct item
{
	int weight;
	int cost;
};
bool compare(item i , item j )
{
	return ((i.cost/i.weight)>(j.cost/j.weight));
}

void sort(item i[] , int n )
{
	std::sort(i,i+n,compare);
}


int main()
{
	cout<<"Enter Number of items: ";
	int n,w ;
	cin>>n;
	cout<<"\nEnter max capacity W : ";
	cin>>w;
	item a[n];
	cout<<"\n";
	for(int i = 0 ; i < n ;i ++)
	{
		cin>>a[i].weight>>a[i].cost;

	}

	sort(a,n);
	cout<<"\n";
	for(int i = 0 ; i < n ;i ++)
	{
		cout<<a[i].weight<<" " <<a[i].cost<<"\n";

	}
	int current_wt = 0 ,cost = 0 ;
	for(int i = 0 ; i < n ; i ++)
	{
		if(current_wt+a[i].weight<=w)
		{
			current_wt += a[i].weight;
			cost += a[i].cost;

		}
		else
		{

			int leftover = w - current_wt;
			current_wt += leftover;
			cost += a[i].cost*((double) leftover / a[i].weight);
			//cout<<"leftover"<<leftover<<" cost"<<cost<<"just added to cost "<<
			break;
		}
	}

	cout<<"COST : "<<cost;

}
