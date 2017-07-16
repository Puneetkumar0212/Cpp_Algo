#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct train
{
	int arrival_hr;
	int arrival_min;
	int departure_hr;
	int departure_min;
	
};
bool compare(train i , train j )
{
	if(i.arrival_hr!=j.arrival_hr)
		return i.arrival_hr<j.arrival_hr;
	else
		return i.arrival_min<j.arrival_min;
}

void sort(train i[] , int n )
{
	std::sort(i,i+n,compare);
}


int main()
{
	cout<<"Enter Number of Trains :";
	int n;
	cin>>n;
	char temp_arrival[10];
	char temp_departure[10];
	train a[n];
	cout<<"\n";
	int i = 0 ;
	for(int i = 0 ; i < n ;i ++)
	{
		
		cin>>temp_arrival;
		cin>>temp_departure;
		// cout<<temp_arrival<<temp_departure;
		int index = 0,pos=1;
		int arrival_hr=0;
		int arrival_min=0;
		int departure_hr=0;
		int departure_min=0;

		while(temp_arrival[index]!='\0')
		{
			
			if(temp_arrival[index]!=':')
			{
				
				
				arrival_hr +=  (temp_arrival[index]-48)*pow(10,pos);
				pos--;
				index++;

		
			}
			else
			{
				index++;
				pos = 1 ;
				break;
			}

		}

		//cout<<"arrival_hr"<<arrival_hr<<" arrival_min"<<arrival_min<<"temp_arrival[indx]"<<temp_arrival[index]<<"\n";
		while(temp_arrival[index]!='\0')
		{
			if(temp_arrival[index]!=':')
			{
				arrival_min +=  (temp_arrival[index]-48)*pow(10,pos);
				pos--;
				index++;
			}
			
		}
		
		index = 0,pos=1;
		while(temp_departure[index]!='\0')
		{
			
			if(temp_departure[index]!=':')
			{
				
				
				departure_hr +=  (temp_departure[index]-48)*pow(10,pos);
				pos--;
				index++;

		
			}
			else
			{
				index++;
				pos = 1 ;
				break;
			}

		}

		//cout<<"arrival_hr"<<arrival_hr<<" arrival_min"<<arrival_min<<"temp_arrival[indx]"<<temp_arrival[index]<<"\n";
		while(temp_departure[index]!='\0')
		{
			if(temp_departure[index]!=':')
			{
				departure_min +=  (temp_departure[index]-48)*pow(10,pos);
				pos--;
				index++;
			}
			
		}
		a[i].arrival_hr = arrival_hr;
		a[i].arrival_min = arrival_min;
		a[i].departure_min=departure_min;
		a[i].departure_hr = departure_hr;


	}

	sort(a,n);
	cout<<"\n";
	for(int i = 0 ; i < n ;i ++)
	{
		cout<<a[i].arrival_hr<<":" <<a[i].arrival_min<<" "<<a[i].departure_hr<<":"<<a[i].departure_min<<"\n";

	}

	int trains=0;
	int current_hr=a[0].departure_hr;
	int current_min = a[0].departure_min;
	
	for(int j = 1 ; j < n ; j ++)
	{
		if(current_hr>a[j].arrival_hr)
		{
			trains++;
		}
		else if (current_hr==a[j].arrival_hr)
		{
			if(current_min>a[j].arrival_min)
				trains++;
		}
		current_hr = a[j].departure_hr;
		current_min = a[j].departure_min;
	}


cout<<"\n Trains Req "<<trains;

}