/*
Given an unsorted array of numbers, write a function that returns true if complete array consists of consecutive numbers. That means if we sort the array, all the elements are consecutive. Array contains only positive numbers. Try doing it in O(n), where n is the size of given array


*/



void shell_sort(int a[] , int n)
{
	int right ;


	
	for(int gap = n/2 ; gap >0 ; gap=gap/2 )
	{
		for(int i = gap ; i < n ; i ++)
		{
			int var = a[i];
			for(right = i ; right>=gap;)
			{
				
				if(a[right-gap]>var)
				{
					a[right]= a[right-gap];
					right = right-gap ;
					
				}
				else break ;

	
			}
			a[right]= var ;
			
			
		}
	}
	
}

bool containsConsecutiveNumbers(int a[], int n){
	// Write your code here
	
	shell_sort(a,n);
	for(int  i = 0 ; i < n-1 ; i ++)
	{
	    if(a[i+1]-a[i]!=1)
	    return false ;
	}
	
return true ;
}
