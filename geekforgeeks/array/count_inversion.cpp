/*
Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j] 
then the pair (i, j) is called an inversion of A. Given an integer array A, your task is 
to find the number of inversions in A.
*/

long long merge(int a[] , long long left , long long mid , long long right )
{
	long long count = 0,i;
	long long start1 = left ;
	long long end1= mid;
	long long start2 = mid+1;
	long long end2 = right ;
	int temp[right*2];
	int index = left ;
	while(start1<=end1&&start2<=end2)
	{
		if(a[start1]>a[start2])
		{
			count+=(mid-start1+1);
			temp[index++]=a[start2];
			start2++;
			
		}
		else{	temp[index++]=a[start1];
		start1++;
		}
	}
	while (start1<=end1)
    temp[index++] = a[start1++];
 	while (start2<=end2)
    temp[index++] = a[start2++];

	
	for (i=left; i <= right; i++)
    {a[i] = temp[i];
    //cout<<a[i]<<"\t";
    }
    //cout<<"\n";
	
return count;	
}

long long merge_sort(int a [] , long long left ,long long right)
{long long c = 0 ;

	if(right > left )
	{
		long long mid = (left+right)/2;
		c+=merge_sort(a,left,mid);
		c+=merge_sort(a,mid+1,right);
	    c += merge(a,left,mid,right);
		
		
	}
return c ;	
}

long long solve(int a[], long long n)
{
	// Write your code here.
    long long temp = 0;
   temp =  merge_sort(a,0,n-1);
    
	
	return temp  ;
}