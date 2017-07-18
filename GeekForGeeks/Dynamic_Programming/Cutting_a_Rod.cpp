#include<iostream>
#include<climits>
using namespace std;
int fun(int a[] , int n)
{
	int temp[n+1]= {0};
 	int i, j;
    for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, a[j] + temp[i-j-1]);
        temp[i] = max_val;
   }
 
   return temp[n];
}



int main()
{
	int i,n ;
	cout<<"Enter Length Of Rod:";
	
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
		cin>>a[i];
	cout<<fun(a,n);
}