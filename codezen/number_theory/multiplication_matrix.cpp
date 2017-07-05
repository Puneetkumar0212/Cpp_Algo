/*Consider a matrix consisting of n rows and n columns. The cell located at the intersection of i-th row and 
j-th column contains number i × j. The rows and columns are numbered from 1. You are given a positive integer k. 
Your task is to count and return the number of cells in matrix that contain number k. Constraints : 1 ≤ n ≤ 10^5 1 ≤ k ≤ 10^9

*/

//Small Value of n 
/*

int gridAppearance(int n,int k)
{
    long long int  count =0,i,j;
	// Write your code here
	int limit = n+1;
	
	for( i = 1 ; i <=n&&i<limit ;i ++)
	{
	    for(j = 1 ; j <=n &&i*j<=k; j ++)
	    {
	        if(i*j==k)
	        {
	            if(i==j)
	            count ++;
	            else
	            count =count+2;
	        
	      
	        limit = j;
	        break;    
	        }
	    }
	    
	}
	
	return count ;
}
*/


//Very large value of n 

int gridAppearance(int n,int k)
{
	// Write your code here
	int ans = 0;
	int limit = k<n?k:n;
	limit ++;
	for(int i=1;i<limit;i++)
	    if(k%i==0 && k/i<=n)
	        { 
	        if(k/i==i)
	            ans++;
	            else
	           { ans = ans +2;
	            limit = k/i;
	           }
	        }
	return ans;
}

