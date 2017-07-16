#include<iostream>
#include<algorithm>
using namespace std;

struct task
{
	int id ;
	int deadline;
	int profit;
};
bool compare(task i , task j )
{
	return i.profit>j.profit;
}

void sort(task i[] , int n )
{
	std::sort(i,i+n,compare);
}


int main()
{
	cout<<"Enter Number of tasks :";
	int n;
	cin>>n;
	
	task a[n];
	cout<<"\n";
	for(int i = 0 ; i < n ;i ++)
	{
		cin>>a[i].deadline>>a[i].profit;
		a[i].id = i+1;

	}

	sort(a,n);
	cout<<"\n";
	for(int i = 0 ; i < n ;i ++)
	{
		cout<<a[i].id<<" " <<a[i].deadline<<" " <<a[i].profit<<"\n";

	}

	int current_deadline = 0 , profit = 0 ;
	for(int i  = 0 ; i < n ; i ++)
	{
		if(current_deadline<a[i].deadline)
		{
			profit+= a[i].profit;
			cout<<"\nTask Performed :"<<a[i].id;
			current_deadline = i+1;

		}
		
	}

	cout<<"\nTotal Profit"<<profit;

}