#include<iostream>
#include<algorithm>
using namespace std;
struct activity 
{
	int start_time ;
	int finish_time;
};

bool compare(activity lhs , activity rhs)
{
	return lhs.finish_time<rhs.finish_time;
}
void sort(activity a[], int n )
{

	 std::sort(a, a+n, compare);
}


int main()
{
	int n;
	cout<<"Enter Number Of Activities";
	cin>>n;
	activity a[n];
	for(int i = 0 ; i < n ; i ++)
		{
			cin>>a[i].start_time>>a[i].finish_time;
		}
	
	sort(a,n);	
	for(int i = 0 ; i < n ; i ++)
		{
			cout<<a[i].start_time<<"\t"<<a[i].finish_time<<"\n";
		}
		cout<<"\nAns:\n";
	int temp_start = a[0].start_time;
	int temp_finish = a[0].finish_time;
	
	cout<<temp_start<<" "<<temp_finish<<"\n";
	for(int j = 1 ; j < n; j++)
	{

		if(a[j].start_time>temp_finish)
		{
			temp_start = a[j].start_time;
			temp_finish = a[j].finish_time;
			cout<<temp_start<<" "<<temp_finish<<"\n";
		}
	}



}