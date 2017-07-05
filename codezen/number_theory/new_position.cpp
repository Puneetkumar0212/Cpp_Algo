/*You are given two integers n and k. Assume numbers from 1 to n are arranged in a way that
 - all odd numbers (in ascending order) comes first and then comes all even numbers (also in ascending order). 
You need to find and return the integer which is at position k (numbering of positions start from 1).


order of n = 10^12;
*/


long long numAtPos(long long n,long long k)
{
   
    k = k-1;
	// Write your code here

	if(n%2==0)
	{
	    if(k<n/2)
	    {
	        return (2*k+1);
	    }
	    else 
	    {
	        return (2*k-n+2);
	        
	    }
	}
	else 
	{
	    if(k<=n/2)
	    {
	        return (2*k+1);
	    }
	    else 
	    {
	        return (2*k-n+1);
	        
	    }
	}
	
}

