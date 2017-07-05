/*
You are given two integers n and m. Count the number of pairs of integers (x, y) such that 
- 1 ≤ x ≤ n 
1 ≤ y ≤ m 
(x + y) mod 5 equals 0

*/


long long countOfPairs(int n,int m)
{
	// Write your code here
		long long count=0 , i , j ,limit = n;
	
	for(int i = 1 ; i <=n ; i ++)
	{
	    for(int j = 1 ; j<=m ; j ++)
	    {
	        if((i+j)%5==0 )
	        {
	            count ++;
	            int temp = m - j;
	            if(temp % 5 ==0)
	            {
	                count += temp/5; 
	                break;
	            }
	            else
	            {
	                while(temp%5!=0)
	                {int temp2 = temp%5;
	                temp = temp - temp2;
	                }
	                 count += temp/5; 
	                 break;
	            }
	        }
	    }
	}
	
	
	
	
	
	return count ;
}
