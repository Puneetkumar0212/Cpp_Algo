#include<iostream>
#include <stdlib.h>
using namespace std;
struct box 
{
	int length ;
	int width ;
	int height ;
};
struct pair1
{
	int start ;
	int end;
	int mid;
};
int compare (const void *a, const void * b)
{
    return ( (*(pair1 *)b).start * (*(pair1 *)b).end) -
           ( (*(pair1 *)a).start * (*(pair1 *)a).end );
}

int find_lis(pair1 a[] , int n)
{


   qsort (a, n, sizeof(a[0]), compare);

   for (int i = 0; i < n; ++i)
	{
		cout<<a[i].start<<" "<<a[i].end<<" "<<a[i].mid<<"\n";
	}



	int temp[n];
	for(int i = 0 ; i <n ;i++)
		temp[i]=a[i].mid;
	for(int i = 1 ; i < n ; i ++)
	{
		for(int j=0 ; j<i;j++)
		{					
			if(a[i].start<a[j].start&&a[i].end<a[j].end)
				{
					temp[i]=max(temp[i],(temp[j]+a[i].mid));
				}
		}
		
	}
	int max = temp[0];
	for(int i = 1 ; i < n ; i ++)
	{
		if(temp[i]>max)
			max = temp[i];
	}

	return max;
}



int main()
{
	cout<<"Enter N :";
	int n ;
	cin>>n;
	box temp[n];
	int k = 3*n;
	pair1 t [k];
	for(int i = 0 ; i< n ; i ++)
		{cin>>temp[i].length>>temp[i].width>>temp[i].height;
		}
		int index = 0,i; 
	for( i = 0,index=0 ; i< n ; i ++,index++)
	{
		//1
		t[index].start=min(temp[i].length,temp[i].width);
		t[index].end = max(temp[i].length,temp[i].width);	
		t[index].mid = temp[i].height;	
		//2
		index++;
		t[index].start=min(temp[i].length,temp[i].height);
		t[index].end = max(temp[i].length,temp[i].height);
		t[index].mid = temp[i].width;
		//3
		index++;
		t[index].start=min(temp[i].width,temp[i].height);
		t[index].end = max(temp[i].width,temp[i].height);
		t[index].mid = temp[i].length;
		
		


	}

	// for (int i = 0; i < (k); ++i)
	// {
	// 	cout<<t[i].start<<" "<<t[i].end<<""<<t[i].mid<<"\n";
	// }


	cout<<find_lis(t,k);
}