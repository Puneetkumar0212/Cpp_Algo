
/*
Given an array of integers and a number x, find the smallest subarray(minimum number of elements) with sum greater than the given value x.
*/


#include <vector>

vector<int> smallestSubarray(int sum, vector<int> a) {
	// Write your code here

	int n = a.size();
	 vector <int> temp;
	for(int gap = 1 ; gap <=n ; gap++) 
	for(int i = 0 ; i < n ; i ++)
	{  int s = 0 ;
	   for(int j = i; j <=gap + i&&(gap+i<n) ; j++)
	   {
	      
	       s+=a[j];
	    //   cout<<a[j]<<"\t"<<s<<"\n";
	   }
	   cout<<endl;
	   if(s>sum)
	   {for(int j = i; j <=gap + i&&(gap+i<n) ; j++)
	   {
	      temp.push_back(a[j]);
	       
	   }
	   return temp;}
	   
	}
	
	
return temp;
}
